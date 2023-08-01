
import os
os.environ["IMAGEIO_FFMPEG_EXE"] = "/usr/bin/ffmpeg"

import speech_recognition as sr 
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
            self.get_logger().info('Face detected - listening')
            os.system("arecord --format=S16_LE --rate=16000 --file-type=wav --duration=5 /home/r1/r1_ws/src/camera/camera/out.wav")
            r = sr.Recognizer()

            self.get_logger().info('Done listening')
            audio = sr.AudioFile("/home/r1/r1_ws/src/camera/camera/out.wav")

            with audio as source:
                audio_file = r.record(source)
                result = r.recognize_google(audio_file)

                print(result)
        # else:
        #     self.get_logger().info('Not detected')
                
        cv2.waitKey(1)
        
def main(args=None):
  
    rclpy.init(args=args)
    
    image_subscriber = ImageSubscriber()
    
    rclpy.spin(image_subscriber)  
  
  
if __name__ == '__main__':
    main()