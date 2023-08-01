
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Int64
from cv_bridge import CvBridge
import cv2
 
class ImageSubscriber(Node):
    def __init__(self):
        super().__init__('image_subscriber')

        self.subscription_detection = self.create_subscription(
            Int64, 
            'face_detected', 
            self.detection_callback, 
            10
        )
        self.subscription_detection
        
        
    def detection_callback(self, data):
        if data.data:
            self.get_logger().info('Face detected')
        else:
            self.get_logger().info('Not detected')
                
        cv2.waitKey(1)
        
def main(args=None):
  
    rclpy.init(args=args)
    
    image_subscriber = ImageSubscriber()
    
    rclpy.spin(image_subscriber)  
  
  
if __name__ == '__main__':
    main()