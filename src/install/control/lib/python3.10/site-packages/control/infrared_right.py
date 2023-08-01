
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)

GPIO_IR = 25

GPIO.setup(GPIO_IR, GPIO.IN)

while True:
    if GPIO.input(GPIO_IR) == 0:
        print("IR sensor detected object")
        time.sleep(0.1)
    else:
        print("No object detected")
        time.sleep(0.1)