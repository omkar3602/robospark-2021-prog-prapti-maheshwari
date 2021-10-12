import cv2

images = "C:\\Users\\Ivavsys\\OneDrive\\Desktop\\TRF\\Robospark\\robospark-2021-prog-prapti-maheshwari\\10_10_IP_task_16_omkar_jahagirdar\\images\\"

img = cv2.imread(images+'thresholding.jpeg', cv2.IMREAD_GRAYSCALE)
img = cv2.resize(img,(400,400))


ret, simple_thresh = cv2.threshold(img, 150, 255, cv2.THRESH_BINARY)
ret, simple_thresh1 = cv2.threshold(img, 150, 255, cv2.THRESH_BINARY_INV)

cv2.imwrite("simple_thresh.jpg", simple_thresh)
cv2.imwrite("simple_thresh_inv.jpg", simple_thresh1)


adaptive_thresh = cv2.adaptiveThreshold(img, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY, 5, 2)
adaptive_thresh0 = cv2.adaptiveThreshold(img, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY_INV, 5, 2)

cv2.imwrite("adapt_mean_thresh.jpg",adaptive_thresh)
cv2.imwrite("adapt_mean__thresh_inv.jpg",adaptive_thresh0)


adaptive_thresh1 = cv2.adaptiveThreshold(img, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 5, 2)
adaptive_thresh2 = cv2.adaptiveThreshold(img, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV, 5, 2)

cv2.imwrite("adapt_guass_thresh.jpg", adaptive_thresh1)
cv2.imwrite("adapt_guass_thresh_inv.jpg", adaptive_thresh2)