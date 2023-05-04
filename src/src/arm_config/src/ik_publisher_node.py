#!/usr/bin/python3

import rospy
from std_msgs.msg import String
from geometry_msgs.msg import Point

from math import acos, atan2, cos, sin, degrees, radians

def inverse_kinematics(x, y):
    # link length
    l1 = 5
    l2 = 5

    # specifying initial configuration joint angles (in degrees)
    theta1_init = 0
    theta2_init = 0

    ##=====First solution (using JJ Craig’s geometric solution for inverse kinematics)======

    cos2 = (x**2 + y**2 - l1**2 - l2**2) / (2 * l1 * l2)
    theta2 = -acos(cos2) # Taking the negative value theta2 for first solution

    beta = atan2(y, x)
    cos_psi = (x**2 + y**2 + l1**2 - l2**2) / (2 * l1 * (x**2 + y**2)**0.5)
    psi = acos(cos_psi)

    if theta2 < 0:
        theta1 = beta + psi
    else:
        theta1 = beta - psi

    return [theta1, theta2]

def main():
    # Initialize the ROS node
    rospy.init_node('ik_publisher', anonymous=True)

    # Initialize the publisher for x and y values
    pub = rospy.Publisher('x_y_values', Point, queue_size=10)

    # Loop to continuously calculate and publish the x and y values
    while not rospy.is_shutdown():
        # Get the x and y values from some source (e.g., another ROS node or a sensor)
        x = 4
        y = 4

        # Calculate the joint angles using the inverse kinematics function
        joint_angles = inverse_kinematics(x, y)

        # Create a Point message with the x and y values
        point_msg = Point()
        point_msg.x = x
        point_msg.y = y

        # Publish the Point message on the x_y_values topic
        pub.publish(joint_angles)

        # Sleep for a short time to control the rate of publishing
        rospy.sleep(0.1)

        if __name__ == '__main__':
            rospy.spin()
