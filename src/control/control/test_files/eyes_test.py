
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
    
def green():
    GPIO.output(GPIO_RED1, GPIO.HIGH)
    GPIO.output(GPIO_GREEN1, GPIO.LOW)
    GPIO.output(GPIO_BLUE1, GPIO.HIGH)
    GPIO.output(GPIO_RED2, GPIO.HIGH)
    GPIO.output(GPIO_GREEN2, GPIO.LOW)
    GPIO.output(GPIO_BLUE2, GPIO.HIGH)

def red():
    GPIO.output(GPIO_RED1, GPIO.HIGH)
    GPIO.output(GPIO_GREEN1, GPIO.HIGH)
    GPIO.output(GPIO_BLUE1, GPIO.LOW)
    GPIO.output(GPIO_RED2, GPIO.HIGH)
    GPIO.output(GPIO_GREEN2, GPIO.HIGH)
    GPIO.output(GPIO_BLUE2, GPIO.LOW)

def yellow():
    GPIO.output(GPIO_RED1, GPIO.HIGH)
    GPIO.output(GPIO_GREEN1, GPIO.HIGH)
    GPIO.output(GPIO_BLUE1, GPIO.HIGH)
    GPIO.output(GPIO_RED2, GPIO.HIGH)
    GPIO.output(GPIO_GREEN2, GPIO.HIGH)
    GPIO.output(GPIO_BLUE2, GPIO.HIGH)
    

if __name__ == '__main__':
    GPIO.setwarnings(False)
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(GPIO_RED1, GPIO.OUT)
    GPIO.setup(GPIO_GREEN1, GPIO.OUT)
    GPIO.setup(GPIO_BLUE1, GPIO.OUT)
    GPIO.setup(GPIO_RED2, GPIO.OUT)
    GPIO.setup(GPIO_GREEN2, GPIO.OUT)
    GPIO.setup(GPIO_BLUE2, GPIO.OUT)

    green()    
    time.sleep(1)
    red()
    time.sleep(1)
    yellow()
    time.sleep(1)
    GPIO.cleanup()
