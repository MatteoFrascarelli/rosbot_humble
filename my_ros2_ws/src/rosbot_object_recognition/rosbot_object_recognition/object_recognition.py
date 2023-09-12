import cv2
import numpy as np
import time
import os
from typing import Any
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose2D
from std_msgs.msg import String
from std_msgs.msg import Float32
from rosbot_interfaces.msg import ObstacleInfo
from nav_msgs.msg import MapMetaData


min_area = 200  # to tune on the real object dataset
max_area = 100000

class Obstacle:
    def __init__(self, name, frame_ID, shape, position_x, position_y, orientation, area):
        self.name = name
        self.frame_ID = frame_ID
        self.shape = shape
        self.position_x = position_x
        self.position_y = position_y
        self.orientation = orientation
        self.area = area

#creation of the ROS2 node
class ObjectRecognitionNode(Node):
    def __init__(self):
        super().__init__("object_recognition")

        self.init_publishers()
        self.init_subscriptions()

        self.create_timer(2, self.process_map)
        self.get_logger().info("Obstacle_info Node has been started complete!")

        #DATA AND VARIABLES
        self.map_metadata = MapMetaData()

    def init_publishers(self):
        self.obj_pub = self.create_publisher(
            ObstacleInfo, "/obstacle_info", 10
        )

        
    def init_subscriptions(self):
        self.map_metadata_sub = self.create_subscription(
            MapMetaData, "/map_metadata", self.map_metadata_callback, 10
        )        

    def process_map(self):
        img = cv2.imread('/maps/map.png')
        obstacle_list = self.shape_recognition(img)
        self.publish_object_msg(obstacle_list)


    def publish_object_msg(self, obstacle_list):
        print("---- START MESSAGE ----")
        message = ObstacleInfo()
        for obstacle in obstacle_list:
            print(obstacle.name, '\n', 
                  obstacle.shape, '\n', 
                  obstacle.position_x, '\n', 
                  obstacle.position_y, '\n', 
                  obstacle.orientation, '\n', 
                  obstacle.area, '\n', 
                  obstacle.frame_ID
            )
            
            message.name = obstacle.name
            message.shape = obstacle.shape
            message.position.x = float(obstacle.position_x)
            message.position.y = float(obstacle.position_y)
            message.position.theta = float(obstacle.orientation)
            message.area = float(obstacle.area) #**TO SET FLOAT IN INTERFACE**
            message.frame_id = obstacle.frame_ID
            self.obj_pub.publish(message)
        
        print("---- END MESSAGE ----")

    def map_metadata_callback(self, map_data):
        self.map_metadata = map_data

    def shape_recognition(self, img):
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)  # convert in grayscale
        _, binary = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY_INV)  # convert in binary color
        
        edges = cv2.Canny(binary, 30, 100)  # edge detection (https://docs.opencv.org/4.x/da/d22/tutorial_py_canny.html)

        # Image processing to clean the edge detected
        # (https://docs.opencv.org/3.4/db/df6/tutorial_erosion_dilatation.html)
        dilated = cv2.dilate(edges, None, iterations=2)
        eroded = cv2.erode(dilated, None, iterations=2)

        # find contours of eroded image with these specifications:
        #   1) cv2.RETR_EXTERNAL: consider only the most external contours of each detection (better performance ?)
        #      [https://docs.opencv.org/4.x/d9/d8b/tutorial_py_contours_hierarchy.html]
        #   2) cv2.CHAIN_APPROX_SIMPLE : assuming that the countours are almost straight line, save only the 2 end-points for each line
        #      [https://docs.opencv.org/4.x/d4/d73/tutorial_py_contours_begin.html]
        contours, _ = cv2.findContours(eroded, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        # Introduce a variable to count the number of real objects
        j = 0

        obstacle_list = []

        for i, contour in enumerate(contours):

            area = cv2.contourArea(contour)  # calculate area of contour

            if area < min_area:  # ignore small areas (e.g. one pixel, false detection, ...)
                continue
            if area > max_area:  # ignore the room walls detections
                continue

            # Approximate the contour of the object by a polygon
            # [https://opencv24-python-tutorials.readthedocs.io/en/latest/py_tutorials/py_imgproc/py_contours/py_contour_features/py_contour_features.html]
            epsilon = 0.03 * cv2.arcLength(contour, True)
            poly_approx = cv2.approxPolyDP(contour, epsilon, True)

            #check if is a polygon
            if len(poly_approx) < 3:
                continue
            
            # A Real Object is detected
            j = j + 1

            # Identify shape by aspectRatio and number of sides
            if len(poly_approx) == 3:
                shape = "triangle"
            elif len(poly_approx) == 4:
                # it could be a square or a rectangle
                (x, y, w, h) = cv2.boundingRect(poly_approx)  # approx. the polygon with a bounding box
                aspect_ratio = float(w) / float(h)

                if aspect_ratio >= 0.95 or aspect_ratio <= 1.05:
                    shape = "square"
                else:
                    shape = "rectangle"
            else:  # the circle is approx. as a polygon so it could have a number of sides larger than four
                shape = "circle"

            # Detect the center of the object in pixels and convert it to metres
            # {Fixed} dimensions of the room in pixels:
            #TODO
            px = 391
            py = 580

            resolution = 0.05 #[m/pixel]

            # # Fixed dimensions of the room in metres
            # mx = 8
            # my = 12
            #TODO: MAYBE USE RESOLUTION OF THE MAP (/map_metadata)

            # Calculate the center of the objects in the frame "Cartesian coordinates Top-Left"
            M = cv2.moments(contour)

            if M["m00"] != 0:
                cX = int((M["m10"] * resolution)/ (M["m00"]))
                cY = int((M["m01"] * resolution) / (M["m00"]))
            else:
                cX, cY = 0, 0

            # Detect the orientation of polygonal objects
            if len(poly_approx) <= 4:
                orientation_deg = self.calculate_rotation_angle(poly_approx)

            else:
                orientation_deg = 0

            #create the object of the Obstacle Class
            obstacle = Obstacle(f"Obstacle {i+1}", "Cartesian Coordinates Top-Left", shape, cX, cY, orientation_deg, area) 
            obstacle_list.append(obstacle)
        
        return obstacle_list


    def calculate_rotation_angle(self, poly_approx):
        if len(poly_approx) < 3:
            raise ValueError("The polygon must have at least three vertices.")

        # Take the first two points of the polygon to calculate the vector
        x1, y1 = poly_approx[0][0]  # Access the x and y coordinates of the first point
        x2, y2 = poly_approx[1][0]  # Access the x and y coordinates of the second point

        # Calculate the vector between the first two points using numpy arrays
        vector = np.array([x2 - x1, y2 - y1])

        angle_radians = np.arctan2(vector[1], vector[0])
        angle_degrees = np.degrees(angle_radians)

        # Return the angle of rotation
        return angle_degrees

def main():
    rclpy.init()
    node = ObjectRecognitionNode()

    try:
        while rclpy.ok():
            # Process callbacks
            rclpy.spin(node)
            
        rclpy.try_shutdown()
    except KeyboardInterrupt:
        pass


if __name__ == "__main__":
    main()