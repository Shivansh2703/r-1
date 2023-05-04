#!/usr/bin/python3

import rospy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from web_video_server.web_video_server import WebVideoServer

def image_callback(msg):
    web_video_server.publish(msg)

rospy.init_node('web_video_server')
web_video_server = WebVideoServer()
rospy.Subscriber('/camera/image_raw', Image, image_callback)
rospy.spin()
