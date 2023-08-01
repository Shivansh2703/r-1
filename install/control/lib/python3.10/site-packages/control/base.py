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

        self.sensor = self.create_subscription(
            Int64, 
            'sensors_pub', 
            self.callback, 
            10
        )
        self.sensor
      
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
    
    def callback(self, data):
        if data.data == 1: # Face detected
            stop()
        elif data.data == 2: # Objects on all sides
            reverse()
        elif data.data == 3: # Objects in front and left but right is empty
            hard_right()
        elif data.data == 4: # Objects in front and right but left is empty
            hard_left()
        elif data.data == 5: # Object in front but left and right are empty
            hard_left()
        elif data.data == 6: # Objects on left and right but front is empty
            forward()
        elif data.data == 7: # Object on left but front and right are empty
            hard_right()
        elif data.data == 8: # Object on right but front and left are empty
            hard_left()
        elif data.data == 9: #no objects
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
