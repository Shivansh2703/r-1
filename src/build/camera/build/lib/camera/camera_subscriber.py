  
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
    
        self.subscription_detection = self.create_subscription(
            Int64, 
            'face_detected', 
            self.detection_callback, 
            10
        )
        self.subscription_detection
        
        
    def frames_callback(self, data):
        self.get_logger().info('Receiving video frame')
    
        current_frame = self.br.imgmsg_to_cv2(data)
                
        cv2.waitKey(1)
        
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