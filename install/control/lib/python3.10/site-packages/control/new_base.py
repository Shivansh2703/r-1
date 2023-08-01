  
import rclpy
from math import inf
from rclpy.node import Node
from std_msgs.msg import Int64
import RPi.GPIO as GPIO
from adafruit_servokit import ServoKit
import time

GPIO_enA = 12
GPIO_in1 = 23
GPIO_in2 = 24
GPIO_in3 = 5
GPIO_in4 = 6
GPIO_enB = 26

current_head_position = 's'
current_base_position = 's'
head_index = 4

pca = ServoKit(channels=16)


class BaseSubscriber(Node):
    
    def __init__(self):
        self.initialize_gpio()
        
        self.object_left = 0
        self.object_right = 0
        
        print("TEST")
        super().__init__('new_base_subscriber')

        self.sensor = self.create_subscription(
            Int64, 
            'us_pub', 
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
        
        pca.servo[head_index].set_pulse_width_range(500, 2500)
        set_degree(80)
    
    def callback(self, data):
        if current_head_position != current_base_position and data.data > 100: # Head sees empty path
            if current_head_position == 'r':
                hard_right()
                time.sleep(0.5)
                current_head_position = 's'
            elif current_head_position == 'l':
                hard_left()
                time.sleep(0.5)
                current_head_position = 's'
        else:
            if data.data < 100: # Object detected
                stop()
                current_head_position = 'r'
                set_degree(current_head_position)
            else:
                current_head_position = 's'
                current_base_position = 's'
                forward()

        
def set_degree(dir):
    if dir == 's':
        pca.servo[head_index].angle = 80
    elif dir == 'r':
        pca.servo[head_index].angle = 35
    elif dir == 'l':
        pca.servo[head_index].angle = 125

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
    
    new_base_subscriber = BaseSubscriber()
    rclpy.spin(new_base_subscriber)
        
    new_base_subscriber.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
