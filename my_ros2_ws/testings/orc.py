import cv2
import numpy as np
import time

min_area = 200  #to tune on the real object dataset
max_area = 100000

px2m = 0.05

# origin = []

# with open("map.yaml", 'r') as file:
#     for line in file:
#         if "origin" in line:
#             coord = line.split(':')[1].replace(" ", "").replace("[","").replace("]", "").split(",")
#             for elem in coord:
#                 origin.append(float(elem))


# print(origin)

def shape_recognition(img):
    img_copy = img.copy()   #save a copy of the image to display the result later
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)    #convert in grayscale
    _, binary = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY_INV)    #convert in binary color
    """
    this is needed because in the map:
     1) unexplored zones of the map are gray (127 on grayscale);
     2) clear explored zones are white (255 on grayscale);
     3) the contours of the object detected are black (0 on grayscale)

     the binary result image uniform the "background" of the map to achive
     better detection 
    """
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

    for i, contour in enumerate(contours):
        area = cv2.contourArea(contour) #calculate area of contour
        
        if area < min_area: #ignore small areas (e.g. one pixel, false detection, ...)
            continue
        if area > max_area: #ignore the room walls detections
            continue

        #Approximate the contour by a polygon 
        #[https://opencv24-python-tutorials.readthedocs.io/en/latest/py_tutorials/py_imgproc/py_contours/py_contour_features/py_contour_features.html]
        epsilon = 0.03 * cv2.arcLength(contour, True)
        poly_approx = cv2.approxPolyDP(contour, epsilon, True)

        print("Contour : ", i+1)
        print("\t1) Number of sides of the polygon approximating contour ", " : ", len(poly_approx))

        #Identify shape by aspectRatio and number of sides
        if len(poly_approx) == 3:
            shape = "triangle"
        elif len(poly_approx) == 4:
            #it could be a square or a rectangle
            (x, y, w, h) = cv2.boundingRect(poly_approx)    #approx. the polygon with a bounding box
            aspect_ratio = float(w) / float(h)

            if aspect_ratio >= 0.95 or aspect_ratio <= 1.05:
                shape = "square"
            else:
                shape = "rectangle"
        else:   #the circle is approx. as a polygon so it could have a number of sides larger than four
            shape = "circle"

        print("\t2) Shape : ", shape)
        print("\n")

        #Visual output as windows with masked object
        mask = np.zeros_like(gray)  #make a total obscuring mask
        cv2.drawContours(mask, [contour], -1, 255, 1)

        single_object = cv2.bitwise_and(img_copy, img_copy, mask=mask)  #masking the original image to show only the desired object 

        #Detect the center of the object
        M = cv2.moments(contour)
        if M["m00"] != 0:
            cX = int(M["m10"] / M["m00"])
            cY = int(M["m01"] / M["m00"])
        else:
            cX, cY = 0, 0

        cv2.circle(single_object, (cX, cY), 1, (255, 255, 255), -1) #draw the center of the shape on the single object image
        
        #Legenda for single object
        text = f"Center=({cX*px2m},{cY*px2m}), Area={area*px2m*px2m}, Shape={shape}"
        cv2.putText(single_object, text, (5, 10), cv2.FONT_HERSHEY_SIMPLEX, 0.3, (255, 255, 255), 1)

        # Display the single object image in a separate, resizable window
        cv2.namedWindow(f"Object {i+1}", cv2.WINDOW_NORMAL)
        cv2.imshow(f"Object {i+1}", single_object)

        # Draw the contour and center of the shape on the original image
        cv2.drawContours(img, [contour], -1, (0, 255, 0), 2)
        cv2.circle(img, (cX, cY), 2, (0, 0, 255), -1)
        

    # Display the original image with all objects highlighted
    cv2.namedWindow("Image", cv2.WINDOW_NORMAL)
    cv2.imshow("Image", img)


start_time = time.time()
img = cv2.imread('/home/edo/progetto_lvm/obj_recognition/map.png')
shape_recognition(img)

print("Elapsed time: ", (time.time() - start_time)*1000, " ms")

cv2.waitKey(0)
