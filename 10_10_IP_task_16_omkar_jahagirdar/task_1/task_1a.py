import cv2
import numpy as np

images = "C:\\Users\\Ivavsys\\OneDrive\\Desktop\\TRF\\Robospark\\robospark-2021-prog-prapti-maheshwari\\10_10_IP_task_16_omkar_jahagirdar\\images\\"

img = cv2.imread(images+'morphology.jpg')

kernel = np.ones((5, 5), np.uint8)

img_erosion = cv2.erode(img, kernel, iterations=1)
img_dilation = cv2.dilate(img_erosion, kernel, iterations=1)

cv2.imwrite("morphology-eroded.jpg", img_erosion)
cv2.imwrite("morphology-dilated.jpg", img_dilation)