  
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Int64
from cv_bridge import CvBridge
import cv2
 
class ImageSubscriber(Node):
    def __init__(self):
        
        super().__init__('image_subscriber')
        self.subscription_frames = self.create_subscription(
            Image, 
            'video_frames', 
            self.frames_callback, 
            10
        )
        self.subscription_frames
        self.br = CvBridge()
        
    def frames_callback(self, data):
        self.get_logger().info('Receiving video frame')
        current_frame = self.br.imgmsg_to_cv2(data)
        cv2.imshow("Camera Test", current_frame)
        cv2.waitKey(1)

def main(args=None):
  
    rclpy.init(args=args)
    
    image_subscriber = ImageSubscriber()
    
    rclpy.spin(image_subscriber)  
  
  
if __name__ == '__main__':
  main()
