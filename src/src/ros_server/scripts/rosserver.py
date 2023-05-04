#!/usr/bin/python3

import rospy
import os

if __name__ == '__main__':
    rospy.init_node('rosserver')
    command = 'cd catkin_ws/src/ros_server/src && python3 manage.py runserver'  # Replace with your desired command
    os.system(command)
