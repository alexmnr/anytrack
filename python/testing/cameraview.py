import cv2

cap = cv2.VideoCapture(0, cv2.CAP_V4L2)
cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc('M', 'J', 'P', 'G'))
# cap.set(cv2.CAP_PROP_FOURCC, cv2.VideoWriter_fourcc('Y', 'U', 'Y', 'V'))
width = 1920
height = 1080
cap.set(cv2.CAP_PROP_FRAME_WIDTH, width)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, height)

while(True):
    # Capture the video frame
    # by frame
    ret, frame = cap.read()
  
    # Display the resulting frame
    cv2.imshow('frame', frame)
      
    # the 'q' button is set as the
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
  
cap.release()
cv2.destroyAllWindows()

# x1: 776 x2: 1015 = 239
# X                = 25
# Z                = 156.05
# fx = 1195.478

# y1: 788 y2: 547  = 241
# Y                = 25
# Z                = 156.05
# fy = 1205.482