
import rclpy
from math import inf
from rclpy.node import Node
from std_msgs.msg import Int64
import RPi.GPIO as GPIO
import time

GPIO_RED1 = 4
GPIO_GREEN1 = 27
GPIO_BLUE1 = 22

GPIO_RED2 = 10
GPIO_GREEN2 = 9
GPIO_BLUE2 = 11

class EyesSubscriber(Node):
    def __init__(self):
        self.initialize()
        
        super().__init__('eyes_subscriber')
        self.sensor = self.create_subscription(
            Int64, 
            'sensors_pub', 
            self.callback, 
            10
        )
        self.sensor     
        
        
    def initialize(self):
        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(GPIO_RED1, GPIO.OUT)
        GPIO.setup(GPIO_GREEN1, GPIO.OUT)
        GPIO.setup(GPIO_BLUE1, GPIO.OUT)
        GPIO.setup(GPIO_RED2, GPIO.OUT)
        GPIO.setup(GPIO_GREEN2, GPIO.OUT)
        GPIO.setup(GPIO_BLUE2, GPIO.OUT)
        
        green()
        
    def callback(self, data):
        if data.data in [1, 2]:
            off()
        elif data.data in [3, 4, 5, 7, 8]:
            green()
        elif data.data in [6, 9]:
            green()


def green():
    GPIO.output(GPIO_RED1, GPIO.HIGH)
    GPIO.output(GPIO_GREEN1, GPIO.LOW)
    GPIO.output(GPIO_BLUE1, GPIO.HIGH)
    GPIO.output(GPIO_RED2, GPIO.HIGH)
    GPIO.output(GPIO_GREEN2, GPIO.LOW)
    GPIO.output(GPIO_BLUE2, GPIO.HIGH)
    
def off():
    GPIO.output(GPIO_RED1, GPIO.HIGH)
    GPIO.output(GPIO_GREEN1, GPIO.HIGH)
    GPIO.output(GPIO_BLUE1, GPIO.HIGH)
    GPIO.output(GPIO_RED2, GPIO.HIGH)
    GPIO.output(GPIO_GREEN2, GPIO.HIGH)
    GPIO.output(GPIO_BLUE2, GPIO.HIGH)

def red():
    GPIO.output(GPIO_RED1, GPIO.LOW)
    GPIO.output(GPIO_GREEN1, GPIO.HIGH)
    GPIO.output(GPIO_BLUE1, GPIO.HIGH)
    GPIO.output(GPIO_RED2, GPIO.LOW)
    GPIO.output(GPIO_GREEN2, GPIO.HIGH)
    GPIO.output(GPIO_BLUE2, GPIO.HIGH)

def yellow():
    GPIO.output(GPIO_RED1, GPIO.LOW)
    GPIO.output(GPIO_GREEN1, GPIO.LOW)
    GPIO.output(GPIO_BLUE1, GPIO.HIGH)
    GPIO.output(GPIO_RED2, GPIO.LOW)
    GPIO.output(GPIO_GREEN2, GPIO.LOW)
    GPIO.output(GPIO_BLUE2, GPIO.HIGH)
    
    
def main(args=None):
    rclpy.init(args=args)
    eyes_subscriber = EyesSubscriber()
    rclpy.spin(eyes_subscriber)  
  
if __name__ == '__main__':
    main()