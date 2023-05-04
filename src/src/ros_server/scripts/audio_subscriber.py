#!/usr/bin/python3

import rospy
import pyaudio
import wave
import requests
from std_msgs.msg import String

class AudioSubscriber:
    def __init__(self):
        self.rate = 44100
        self.chunk = 1024
        self.channels = 2
        self.format = pyaudio.paInt16
        self.audio = pyaudio.PyAudio()
        self.stream = self.audio.open(format=self.format, channels=self.channels, rate=self.rate, output=True, frames_per_buffer=self.chunk)
        rospy.Subscriber('audio_stream', String, self.callback)

    def callback(self, data):
        self.stream.write(data.data)
        requests.post('http://192.168.1.89:8000/audio', data=data.data)
    def __del__(self):
        self.stream.stop_stream()
        self.stream.close()
        self.audio.terminate()

if __name__ == '__main__':
    rospy.init_node('audio_subscriber')
    audio_subscriber = AudioSubscriber()
    rospy.spin()
