from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='control',
            executable='us_pub',
            name='ultrasonic_publisher'
        ),
        Node(
            package='control',
            executable='ir_left_pub',
            name='infrared_left_publisher'
        ),
        Node(
            package='control',
            executable='ir_right_pub',
            name='infrared_right_publisher'
        ),
        Node(
            package='control',
            executable='sensors_sub',
            name='sensors_publisher'
        ),
        Node(
            package='control',
            executable='base_sub',
            name='base_subscriber'
        ),
        Node(
            package='control',
            executable='left_hand_sub',
            name='left_hand_subscriber'
        ),
        Node(
            package='control',
            executable='right_hand_sub',
            name='right_hand_subscriber'
        ),
        Node(
            package='control',
            executable='head_sub',
            name='head_subscriber'
        ),
        Node(
            package='control',
            executable='eyes_sub',
            name='eyes_subscriber'
        ),
        Node(
            package='camera',
            executable='img_pub',
            name='image_publisher'
        ),
        Node(
            package='camera',
            executable='frames_sub',
            name='image_subscriber'
        ),
        Node(
            package='voice',
            executable='voice_sub',
            name='image_subscriber'
        )
        # Node(
        #     package='voice',
        #     executable='main',
        #     name='listener_publisher'
        # )
    ])
