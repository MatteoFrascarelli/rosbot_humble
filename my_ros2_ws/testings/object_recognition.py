import cv2
import numpy as np
import time

def identify_shapes(img):
    img_copy = img.copy() # save a copy of the map
    
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY) # Convert the image to grayscale

    # Apply thresholding to convert the image to binary
    _, binary = cv2.threshold(gray, 127, 255, cv2.THRESH_BINARY_INV)

    # Apply edge detection
    edges = cv2.Canny(binary, 30, 100)

    # Perform a dilation and erosion to close gaps in between object edges
    dilated = cv2.dilate(edges, None, iterations=2)
    eroded = cv2.erode(dilated, None, iterations=2)

    # Find contours in the eroded image
    contours, _ = cv2.findContours(eroded, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    for i, contour in enumerate(contours):
        # Calculate contour area
        area = cv2.contourArea(contour)

        # Ignore small contours based on some threshold area
        if area < 200:  # set this value based on your specific needs
            continue

        # Approximate the contour by a polygon
        epsilon = 0.03*cv2.arcLength(contour,True)
        approx = cv2.approxPolyDP(contour,epsilon,True)

        print(i+1, len(approx))
        
        # Identify the shape
        shape = ""
        if len(approx) == 3:
            shape = "Triangle"
        elif len(approx) == 4:
            (x, y, w, h) = cv2.boundingRect(approx)
            aspectRatio = w / float(h)
            if aspectRatio >= 0.95 and aspectRatio <= 1.05:
                shape = "Square"
            else:
                shape = "Rectangle"
        else:
            shape = "Circle"
        
        # Compute the moments to calculate the centroid
        M = cv2.moments(contour)
        if M["m00"] != 0:
            cX = int(M["m10"] / M["m00"])
            cY = int(M["m01"] / M["m00"])
        else:
            cX, cY = 0, 0

        # Create a mask image that contains the contour filled in
        mask = np.zeros_like(gray)
        cv2.drawContours(mask, [contour], -1, 255, -1)

        # Bitwise-and the mask and the original image to get an image that only shows the current object
        single_object = cv2.bitwise_and(img_copy, img_copy, mask=mask)

        # Draw the center of the shape on the single object image
        cv2.circle(single_object, (cX, cY), 7, (255, 255, 255), -1)

        # Write the info to the single object image
        text = f"Center=({cX},{cY}), Area={area}, Shape={shape}"
        cv2.putText(single_object, text, (10, 20), cv2.FONT_HERSHEY_SIMPLEX, 0.4, (255, 255, 255), 1)

        # Display the single object image in a separate, resizable window
        cv2.namedWindow(f"Object {i+1}", cv2.WINDOW_NORMAL)
        cv2.imshow(f"Object {i+1}", single_object)

        # Draw the contour and center of the shape on the original image
        cv2.drawContours(img, [contour], -1, (0, 255, 0), 2)
        cv2.circle(img, (cX, cY), 7, (255, 255, 255), -1)

    # Display the original image with all objects highlighted
    cv2.namedWindow("Image", cv2.WINDOW_NORMAL)
    cv2.imshow("Image", img)
    
start_time = time.time()
img = cv2.imread('/home/edo/progetto_lvm/obj_recognition/map.png')
identify_shapes(img)

print("Elapsed time: ", (time.time() - start_time)*1000, " ms")

cv2.waitKey(0)