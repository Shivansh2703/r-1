  
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Int64
from cv_bridge import CvBridge
import cv2
 
class ImagePublisher(Node):
    
    def __init__(self):
        super().__init__('image_publisher')
        
        self.publisher_frames = self.create_publisher(Image, 'video_frames', 10)
        self.publisher_detection = self.create_publisher(Int64, 'face_detected', 10)
        
        timer_period = 0.1
        
        self.timer = self.create_timer(timer_period, self.timer_callback)
            
        self.cap = cv2.VideoCapture(0)
            
        self.br = CvBridge()
   
    
    def timer_callback(self):
        face_classifier = cv2.CascadeClassifier(
                                    cv2.data.haarcascades + "haarcascade_frontalface_default.xml"
                            )
        ret, frame = self.cap.read()
            
        if ret == True:
            grey_image = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            face = face_classifier.detectMultiScale(
                            grey_image, scaleFactor=1.1, minNeighbors=5, minSize=(40, 40)
                        )
            if len(face): # face detected
                self.get_logger().info("YES")
                my_message = Int64()
                my_message.data = 1
                self.publisher_detection.publish(my_message)
            else: # no face detected
                self.get_logger().info("NO")
                my_message = Int64()
                my_message.data = 0
                self.publisher_detection.publish(my_message)
            self.publisher_frames.publish(self.br.cv2_to_imgmsg(frame))
        
        
        self.get_logger().info('Publishing video frame')
    
def main(args=None):
    rclpy.init(args=args)
    image_publisher = ImagePublisher()
    rclpy.spin(image_publisher)
    
    image_publisher.destroy_node()
    rclpy.shutdown()
  
if __name__ == '__main__':  
    main()