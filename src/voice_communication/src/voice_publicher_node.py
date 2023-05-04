#!/usr/bin/env python

import rospy
import audio_common_msgs.msg
import roslibpy

def audio_callback(data):
    global client
    # Publish audio data to server
    client.publish('/audio_stream', {'data': data.data})

if __name__ == '__main__':
    rospy.init_node('audio_stream_publisher')
    rate = rospy.Rate(10) # 10hz

    # Set up ROS audio capture
    audio_topic = '/audio'
    rospy.Subscriber(audio_topic, audio_common_msgs.msg.AudioData, audio_callback)

    # Set up ROSbridge client
    client = roslibpy.Ros(host='localhost', port=9090)
    client.run()
    client.caller_id = 'audio_stream_publisher'

    # Publish audio stream to server
    client.advertise('/audio_stream', 'audio_common_msgs/AudioData')

    while not rospy.is_shutdown():
        rate.sleep()

    # Shut down ROSbridge client
    client.terminate()
