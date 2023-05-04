#!/usr/bin/python3

import rospy
import pyaudio
import wave
from std_msgs.msg import String

class AudioStreamer:
    def __init__(self):
        self.rate = 44100
        self.chunk = 1024
        self.channels = 2
        self.format = pyaudio.paInt16
        self.audio = pyaudio.PyAudio()
        self.stream = self.audio.open(format=self.format, channels=self.channels, rate=self.rate, input=True, frames_per_buffer=self.chunk)
        self.publisher = rospy.Publisher('audio_stream', String, queue_size=10)

    def stream_audio(self):
        while not rospy.is_shutdown():
            data = self.stream.read(self.chunk)
            data_str = str(data,'utf-8')
            self.publisher.publish(data_str)

    def __del__(self):
        self.stream.stop_stream()
        self.stream.close()
        self.audio.terminate()

if __name__ == '__main__':
    rospy.init_node('audio_streamer')
    audio_streamer = AudioStreamer()
    audio_streamer.stream_audio()
