#!/usr/bin/python3

import rospy
from audio_common_msgs.msg import AudioData

def audio_callback(audio_data):
    # Process the audio data here
    pass

def main():
    rospy.init_node('voice_communication_node')
    rospy.Subscriber('/audio', AudioData, audio_callback)
    rospy.spin()

if __name__ == '__main__':
    main()
