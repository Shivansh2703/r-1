#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CameraNode(Node):
    def __init__(self):
        super().__init__("camera_node")
        self.publisher = self.create_publisher(Image, "/camera/image_raw", 10)
        timer_period = 0.1/30
        
        self.timer = self.create_timer(timer_period, self.publish_image)
            
        self.capture = cv2.VideoCapture(0)

        self.bridge = CvBridge()

        # Initialize camera capture (you may need to adjust the camera index)
        #self.capture = cv2.VideoCapture(0)

        # Set camera parameters (if needed)
        self.capture.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
        self.capture.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)

        #self.timer = self.create_timer(1.0 / 30, self.publish_image)

    def publish_image(self):
        ret, frame = self.capture.read()
        if not ret:
            return

        # Convert OpenCV frame to ROS2 Image message
        ros_image = self.bridge.cv2_to_imgmsg(frame, "bgr8")

        # Publish the Image message
        self.publisher.publish(ros_image)

def main(args=None):
    rclpy.init(args=args)
    camera_node = CameraNode()
    rclpy.spin(camera_node)
    camera_node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
