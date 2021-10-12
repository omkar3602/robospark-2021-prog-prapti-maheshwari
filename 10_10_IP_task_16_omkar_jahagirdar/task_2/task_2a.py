import cv2
import numpy as np

images = "C:\\Users\\Ivavsys\\OneDrive\\Desktop\\TRF\\Robospark\\robospark-2021-prog-prapti-maheshwari\\10_10_IP_task_16_omkar_jahagirdar\\images\\"

img = cv2.imread(images+"masking.jpg")
hsv = cv2.cvtColor(img, cv2.COLOR_RGB2HSV)

# red mask
rgbl = np.array([110, 50, 50], np.uint8)
rgbh = np.array([130, 255, 255], np.uint8)
maskr = cv2.inRange(hsv, rgbl, rgbh)

cv2.imwrite("masked-red.jpg", maskr)

# blue mask
rgbl = np.array([2, 120, 0], np.uint8)
rgbh = np.array([40, 255, 255], np.uint8)
maskb = cv2.inRange(hsv, rgbl, rgbh)

cv2.imwrite("masked-blue.jpg", maskb)

# green mask
rgbl = np.array([36, 25, 25], np.uint8)
rgbh = np.array([70, 255, 255], np.uint8)
maskg = cv2.inRange(hsv, rgbl, rgbh)

cv2.imwrite("masked-green.jpg", maskg)