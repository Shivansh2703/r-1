
import os
os.environ["IMAGEIO_FFMPEG_EXE"] = "/usr/bin/ffmpeg"

import speech_recognition as sr 
import rclpy
from rclpy.node import Node
import RPi.GPIO as GPIO
from std_msgs.msg import Int64
import pyttsx3
from adafruit_servokit import ServoKit

import openai
openai.api_key = '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'
import time
 
GPIO_enA = 12
GPIO_in1 = 23
GPIO_in2 = 24
GPIO_in3 = 5
GPIO_in4 = 6
GPIO_enB = 26
right_hand_index = 0
left_hand_index = 3
head_index = 4

pca = ServoKit(channels=16)

def get_completion(prompt, model="gpt-3.5-turbo"):
    messages = [{"role": "user", "content": prompt}]
    response = openai.ChatCompletion.create(model=model, messages=messages, temperature=0)

    return response.choices[0].message["content"]
    
def speak_text(command):
    print(command)
    engine = pyttsx3.init()
    engine.setProperty('rate', 130)
    engine.say(command)
    engine.runAndWait()

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
        
def set_degree(servo, degrees):
    if servo == "r":
        pca.servo[right_hand_index].angle = degrees
    elif servo == "l":
        pca.servo[left_hand_index].angle = degrees
    elif servo == "h":
        pca.servo[head_index].angle = degrees
    

class Listener(Node):
    
    def __init__(self):
        self.initialize_gpio()
        super().__init__('listener_publisher')
        
        self.control_publisher = self.create_publisher(Int64, 'listener_to_control_publisher', 10)
        self.timer = self.create_timer(5, self.callback)
        
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
        
        for i in range(5):
            pca.servo[i].set_pulse_width_range(500, 2500)
        
    def callback(self):
        speak_text("I am listening")
        # print("IM LISTENING")
        os.system("arecord --format=S16_LE --rate=16000 --file-type=wav --duration=3 /home/r1/r1_ws/src/camera/camera/out1.wav")
        r = sr.Recognizer()

        continuous_audio = sr.AudioFile("/home/r1/r1_ws/src/camera/camera/out1.wav")
        with continuous_audio as source:
            continuous_audio_file = r.record(source)
            
            try:
                result = r.recognize_google(continuous_audio_file)
                print(result)
                
                if "hello" in result or "hi" in result or "hey" in result:
                    while True:
                        gpt_result = get_completion(result)
                        speak_text(gpt_result)
                        # SpeakText("Hi I'm listening")
                        os.system("arecord --format=S16_LE --rate=16000 --file-type=wav --duration=5 /home/r1/r1_ws/src/camera/camera/out2.wav")
                        new_audio = sr.AudioFile("/home/r1/r1_ws/src/camera/camera/out2.wav")
                        with new_audio as prompt:
                            new_audio_file = r.record(prompt)
                            try:
                                output = r.recognize_google(new_audio_file)
                                gpt_result = get_completion(output)
                                speak_text(gpt_result)
                                break
                            
                            except:
                                speak_text("I didn't hear you")
                                
                elif "control" in result:
                     while True:
                        speak_text("What do you want to do")
                        os.system("arecord --format=S16_LE --rate=16000 --file-type=wav --duration=5 /home/r1/r1_ws/src/camera/camera/out2.wav")
                        new_audio = sr.AudioFile("/home/r1/r1_ws/src/camera/camera/out2.wav")
                        with new_audio as prompt:
                            new_audio_file = r.record(prompt)
                            try:
                                output = r.recognize_google(new_audio_file)
                                output = output.lower()
                                print("You said", output)
                                if "go forward" in output:
                                    speak_text("Going forward")
                                    forward()
                                    time.sleep(1)
                                    stop()
                                elif "turn right" in output:
                                    speak_text("Turning right")
                                    hard_right()
                                    time.sleep(1)
                                    stop()
                                elif "turn left" in output:
                                    speak_text("Turning left")
                                    hard_left()
                                    time.sleep(1)
                                    stop()
                                elif "go back" in output:
                                    speak_text("Going backward")
                                    reverse()
                                    time.sleep(1)
                                    stop()
                                elif "right hand up" in output:
                                    speak_text("Right hand up")
                                    set_degree("r", 180)
                                elif "right hand down" in output:
                                    speak_text("Right hand down")
                                    set_degree("r", 0)
                                elif "left hand up" in output:
                                    speak_text("Left hand up")
                                    set_degree("l", 180)
                                elif "left hand down" in output:
                                    speak_text("Left hand down")
                                    set_degree("l", 0)
                                elif "head straight" in output:
                                    speak_text("Head straight")
                                    set_degree("h", 80)
                                elif "head right" in output:
                                    speak_text("Head right")
                                    set_degree("h", 80-45)
                                elif "head left" in output:
                                    speak_text("Head left")
                                    set_degree("h", 80+45)
                                elif "reset" in output:
                                    stop()
                                    set_degree("r", 0)
                                    set_degree("l", 0)
                                    set_degree("h", 80)
                                break
                            
                            except:
                                speak_text("I didn't hear you")
                    
                # elif result == "shutdown":

            except:
                print("Nothing heard")
            

def main(args=None):
    rclpy.init(args=args)
    listener = Listener()
    rclpy.spin(listener)
    
    listener.destroy_node()
    rclpy.shutdown()
  
if __name__ == '__main__':  
    main()
