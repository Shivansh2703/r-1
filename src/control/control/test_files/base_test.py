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



def forward():
    right_wheel_control("f")
    left_wheel_control("f")
    
def stop():
    right_wheel_control("o")
    left_wheel_control("o")
    
def right():
    right_wheel_control("r")
    left_wheel_control("f")
    
def left():
    right_wheel_control("f")
    left_wheel_control("r")
    
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
        
if __name__ == '__main__':
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
    
     
    left()
    time.sleep(5)
    print("done")
    stop()