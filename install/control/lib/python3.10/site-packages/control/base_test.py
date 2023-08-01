
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

def initialize_gpio():
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

def stop():
    GPIO.output(GPIO_in1, False)
    GPIO.output(GPIO_in2, False)
    GPIO.output(GPIO_enA, False)
    
    GPIO.output(GPIO_in3, False)
    GPIO.output(GPIO_in4, False)
    GPIO.output(GPIO_enB, False)

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
    initialize_gpio()
    print("test")
    slight_right()
    print("test")
    time.sleep(1)
    print("test")
    stop()
    print("test")
    
    GPIO.cleanup()