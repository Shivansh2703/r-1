  
import rclpy
from math import inf
from rclpy.node import Node
from std_msgs.msg import Int64
import RPi.GPIO as GPIO
import time

GPIO_enA = 12
GPIO_in1 = 23
GPIO_in2 = 24
GPIO_in3 = 5
GPIO_in4 = 6
GPIO_enB = 26


class BaseSubscriber(Node):
    
    def __init__(self):
        self.initialize_gpio()
        
        self.object_left = 0
        self.object_right = 0
        
        print("TEST")
        super().__init__('base_subscriber')

        self.infrared_left = self.create_subscription(
            Int64, 
            'infrared_left', 
            self.infrared_left_callback, 
            10
        )
        self.infrared_left
        
        self.infrared_right = self.create_subscription(
            Int64, 
            'infrared_right', 
            self.infrared_right_callback, 
            10
        )
        self.infrared_right
      
    def initialize_gpio(self):
        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BCM)
        
        # Right Wheel
        GPIO.setup(GPIO_enA, GPIO.OUT)
        GPIO.setup(GPIO_in1, GPIO.OUT)
        GPIO.setup(GPIO_in2, GPIO.OUT)
        
        # Left Wheel
        GPIO.setup(GPIO_in3, GPIO.OUT)
        GPIO.setup(GPIO_in4, GPIO.OUT)
        GPIO.setup(GPIO_enB, GPIO.OUT) 
      
    def infrared_left_callback(self, data):
        self.object_left = data.data
    
    def infrared_right_callback(self, data):
        self.object_right = data.data
        self.make_decision()
        
    def make_decision(self):
        if self.object_left == 1 and self.object_right == 1:
            self.get_logger().info('Rotate')
            hard_right()
        elif self.object_left == 1:
            self.get_logger().info('Right')
            slight_right()
        elif self.object_right == 1:
            self.get_logger().info('Left')
            slight_left()
        else:
            self.get_logger().info('Forward')
            forward()

def stop():
    right_wheel_control("o")
    left_wheel_control("o")

def forward():
    right_wheel_control("f")
    left_wheel_control("f")
    
def reverse():
    right_wheel_control("r")
    left_wheel_control("r")
    
def hard_left():
    right_wheel_control("f")
    left_wheel_control("r")
    
def hard_right():
    right_wheel_control("r")
    left_wheel_control("f")

def slight_left():
    right_wheel_control("f")
    left_wheel_control("o")

def slight_right():
    right_wheel_control("o")
    left_wheel_control("f")
    
def right_wheel_control(dir):
    # print(dir)
    if dir == "f":
        GPIO.output(GPIO_in1, True)
        GPIO.output(GPIO_in2, False)
        GPIO.output(GPIO_enA, True)
    elif dir == "r":
        GPIO.output(GPIO_in1, False)
        GPIO.output(GPIO_in2, True)
        GPIO.output(GPIO_enA, True)
    elif dir == "o":
        GPIO.output(GPIO_in1, False)
        GPIO.output(GPIO_in2, False)
        GPIO.output(GPIO_enA, False)
        
def left_wheel_control(dir):
    # print(dir)
    if dir == "f":
        GPIO.output(GPIO_in3, False) 
        GPIO.output(GPIO_in4, True)
        GPIO.output(GPIO_enB, True)
    elif dir == "r":
        GPIO.output(GPIO_in3, True) 
        GPIO.output(GPIO_in4, False)
        GPIO.output(GPIO_enB, True)
    elif dir == "o":
        GPIO.output(GPIO_in3, False) 
        GPIO.output(GPIO_in4, False)
        GPIO.output(GPIO_enB, False)
            
        
def main(args=None):
    rclpy.init(args=args)
    
    base_subscriber = BaseSubscriber()
    rclpy.spin(base_subscriber)
        
    base_subscriber.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
