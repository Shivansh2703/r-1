
import os
os.environ["IMAGEIO_FFMPEG_EXE"] = "/usr/bin/ffmpeg"

import speech_recognition as sr 
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Int64
from cv_bridge import CvBridge
import cv2
import pyttsx3

import openai
openai.api_key = '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'
import pandas as pd
import time
 
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
            self.SpeakText('Face detected')
            while True:
                try:
                    self.get_logger().info('listening for 5 seconds')
                    self.SpeakText('listening for 5 seconds')
                    os.system("arecord --format=S16_LE --rate=16000 --file-type=wav --duration=5 /home/r1/r1_ws/src/camera/camera/out.wav")
                    r = sr.Recognizer()

                    self.get_logger().info('Done listening')
                    self.SpeakText('Done listening')
                    audio = sr.AudioFile("/home/r1/r1_ws/src/camera/camera/out.wav")

                    with audio as source:
                        audio_file = r.record(source)
                        
                        result = r.recognize_google(audio_file)
                        print(result)
                        
                        gpt_result = self.get_completion(result)
                        print(gpt_result)
                        self.SpeakText(gpt_result)
                    
                    break
                except:
                    error_msg = "I couldn't hear you"
                    print(error_msg)
                    self.SpeakText(error_msg)
                
        # else:
            # self.get_logger().info('Not detected')
                
        cv2.waitKey(1)
        
    def get_completion(self, prompt, model="gpt-3.5-turbo"):
        short_prompt = prompt + "in short"
        messages = [{"role": "user", "content": short_prompt}]
        response = openai.ChatCompletion.create(model=model, messages=messages, temperature=0)

        return response.choices[0].message["content"]
    
    def SpeakText(self, command):
        engine = pyttsx3.init()
        engine.setProperty('rate', 130)
        engine.say(command)
        engine.runAndWait()
        
def main(args=None):
  
    rclpy.init(args=args)
    
    image_subscriber = ImageSubscriber()
    
    rclpy.spin(image_subscriber)  
  
  
if __name__ == '__main__':
    main()
