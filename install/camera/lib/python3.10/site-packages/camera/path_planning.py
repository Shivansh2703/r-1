#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np

class PathPlanningNode(Node):
    def __init__(self):
        super().__init__("path_planning_node")
        self.subscription = self.create_subscription(
            Image,
            "/camera/image_raw",  # Replace with your camera topic
            self.image_callback,
            10,
        )
        self.subscription  # prevent unused variable warning

        self.bridge = CvBridge()

    def image_callback(self, msg):
        try:
            # Convert ROS2 Image to OpenCV format
            frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        except Exception as e:
            self.get_logger().info(f"Error converting image: {str(e)}")
            return

        # Perform obstacle detection from RGB camera data
        frame_with_obstacles, obstacles = self.detect_obstacles(frame)

        # Perform path planning around obstacles
        path = self.path_planning(obstacles)

        # Draw the path on the image
        for i in range(len(path) - 1):
            cv2.line(frame_with_obstacles, path[i], path[i + 1], (0, 255, 0), 2)

        # Display the result
        cv2.imshow("Path Planning with RGB Camera", frame_with_obstacles)
        cv2.waitKey(1)

    def detect_obstacles(self, frame):
        # Convert RGB image to grayscale
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        
        # Apply edge detection (Canny) to find contours of obstacles
        edges = cv2.Canny(gray, threshold1=100, threshold2=200)
        
        # Find contours and filter small noise
        contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        obstacles = [c for c in contours if cv2.contourArea(c) > 100]
        
        # Draw the detected obstacles on the original image
        for obstacle in obstacles:
            cv2.drawContours(frame, [obstacle], -1, (0, 0, 255), 2)
        
        return frame, obstacles

    def path_planning(self, obstacles):
        # For simplicity, let's assume we have a straight path to the goal
        # We will just avoid the detected obstacles by finding a path around them
        
        # Your path planning logic here (e.g., A*, RRT, etc.)
        # This is a simplified example, and you may need to implement a proper path planning algorithm

        # For now, we'll just return a simple path from start to goal
        start = (100, 100)
        goal = (500, 500)
        path = [start, goal]

        return path

def main(args=None):
    rclpy.init(args=args)
    path_planning_node = PathPlanningNode()
    rclpy.spin(path_planning_node)
    path_planning_node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
