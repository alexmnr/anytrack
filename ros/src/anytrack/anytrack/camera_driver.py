from collections import deque
from cv_bridge import CvBridge
import numpy as np
import cv2
import os
import sys
import time
import rclpy
import yaml
from rclpy.node import Node

from sensor_msgs.msg import Image

sys.path.append('/home/ALEX/anytrack/python/lib') 
import tracker as trk 
class camera_driver(Node):  
    def __init__(self): 
        super().__init__("camera_driver")  
        # declare Parameters
        self.declare_parameter("index", -1)
        self.declare_parameter("device", -1)
        self.declare_parameter("config", '')
        self.declare_parameter("debug", 0)
        self.declare_parameter("framerate", 30)
        self.declare_parameter("width", 1280)
        self.declare_parameter("height", 720)
        self.declare_parameter("filter", 1)

        # import parameters
        self.index = self.get_parameter("index").value
        self.device = self.get_parameter("device").value
        self.file = self.get_parameter("config").value
        self.debug = self.get_parameter("debug").value
        self.framerate = self.get_parameter("framerate").value
        self.width = self.get_parameter("width").value
        self.height = self.get_parameter("height").value
        self.filter = self.get_parameter("filter").value

        # debug only
        # self.index = 0
        # self.device = 0
        # self.track = 1
        # self.visualize = 1
        # self.debug = 1
        # self.framerate = 60
        # self.width = 1280
        # self.height = 720
        # self.filter = 1

        # check if Parameters is set
        if (self.device == -1 or self.index == -1):
            self.get_logger().warning("no index was set")
            exit()

        self.get_logger().info("Starting camera driver with index " + str(self.index) + " on device: video" + str(self.device))
        if self.filter == 1:
            self.data = self.read_yaml(self.file)
            for filter in self.data['filter']:
                os.popen('v4l2-ctl -d /dev/video' + str(self.device) + ' -c ' + str(filter) + '=' + str(self.data['filter'][filter]))

        self.image_publisher = self.create_publisher(msg_type=Image, topic="/cam" + str(self.index) + "/image_raw", qos_profile=10)

        # starting main camera Loop
        self.bridge = CvBridge()
        self.camera_loop()

    def read_yaml(self, filename):
        with open(filename, "r") as file_handle:
            return yaml.load(file_handle, Loader=yaml.FullLoader)

    def publish_image(self, image):
        msg = self.bridge.cv2_to_imgmsg(np.array(image), "bgr8")
        msg.header.frame_id = ('cam' +  str(self.index) + '_position')
        msg.header.stamp = self.get_clock().now().to_msg()
        self.image_publisher.publish(msg)

    def camera_loop(self):
        # camera setup
        # cap = trk.VideoStream(src=self.device, resolution=(self.width, self.height), framerate=self.framerate).start()

        cap = cv2.VideoCapture(self.device)
        # setting the right codex to use
        fourcc = cv2.VideoWriter_fourcc('M','J','P','G')
        cap.set(cv2.CAP_PROP_FOURCC, fourcc)
        cap.set(cv2.CAP_PROP_FPS, self.framerate)
        cap.set(cv2.CAP_PROP_FRAME_WIDTH, self.width)
        cap.set(cv2.CAP_PROP_FRAME_HEIGHT, self.height)

        prev_frame_time = 0

        # camera loop
        while (1):
            start_time = time.time()

            _, frame = cap.read()

            # publish image
            self.publish_image(frame)

            if self.debug:
                # cv2.imshow("Frame", frame)
                # print fps
                new_frame_time = time.time()
                fps = 1/(new_frame_time-prev_frame_time)
                prev_frame_time = new_frame_time
                fps = int(fps)
                print(fps)
                cv2.imshow("frame", cv2.resize(frame, (960, 540)))

            cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = camera_driver() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()

