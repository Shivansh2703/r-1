#!/usr/bin/python3

import rospy
import pyaudio
import numpy as np
from std_msgs.msg import Float32MultiArray
from audio_common_msgs.msg import AudioData

class AudioPublisher:

    def __init__(self):
        self.pub = rospy.Publisher('audio_data', Float32MultiArray, queue_size=10)
        #self.pub = rospy.Publisher('/audio_data', AudioData, queue_size=10)
        self.rate = rospy.Rate(10) # Publish rate of 10 Hz
        self.pa = pyaudio.PyAudio()

        # Define the audio stream parameters
        self.chunk_size = 1024
        self.format = pyaudio.paFloat32
        self.channels = 1
        self.rate = 44100

    def start_stream(self):
        stream = self.pa.open(format=self.format,
                              channels=self.channels,
                              rate=self.rate,
                              input=True,
                              frames_per_buffer=self.chunk_size)
        while not rospy.is_shutdown():
            # Read a chunk of audio data from the stream
            data = stream.read(self.chunk_size, exception_on_overflow=False)

            # Convert the data to a numpy array
            data_np = np.frombuffer(data, dtype=np.float32)

            # Publish the audio data to the ROS topic
            msg = Float32MultiArray(data=data_np.tolist())
            self.pub.publish(msg)

            # Sleep for a short time to maintain the publish rate
            #self.rate.sleep()

if __name__ == '__main__':
    rospy.init_node('audio_publisher', anonymous=True)
    audio_pub = AudioPublisher()
    audio_pub.start_stream()
