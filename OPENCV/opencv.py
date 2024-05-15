import cv2
import numpy as np

print(cv2.__version__)

im = cv2.imread('a2.jpg')

im[:,:,0] = 0
im[:,:,0] = 0

b , g , r = cv2.split(im)

cv2.imshow('red',im)

cv2.waitKey(0)
cv2.destroyAllWindows()