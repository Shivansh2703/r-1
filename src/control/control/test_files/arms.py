


import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64
import time
from adafruit_servokit import ServoKit




    
def set_degree(hand ,degrees):
    if hand == 'r':
        pca.servo[right_hand_index].angle = degrees
    elif hand == 'l':
        pca.servo[left_hand_index].angle = degrees

if __name__ == '__main__':
    # Servo 3 is Left Hand
    left_current_position = 140
    left_current_dir = 1 # 1 = going up and -1 = going down
    left_hand_index = 3
    # Servo 0 is Right Hand
    right_current_position = 10
    right_current_dir = 1 # 1 = going up and -1 = going down
    right_hand_index = 0

    nbPCAServo = 5
    pca = ServoKit(channels=16)

    pca.servo[right_hand_index].set_pulse_width_range(500, 2500)
    pca.servo[left_hand_index].set_pulse_width_range(500, 2500)
    # set_degree('r', right_current_position)
    # set_degree('l', left_current_position)
    
    # for i in range(10):
    #     if left_current_position == 140:
    #         left_current_position = 170
    #     else:
    #         left_current_position = 140
    #     if right_current_position == 10:
    #         right_current_position = 40
    #     else:
    #         right_current_position = 10
        
    #     print("Right = " + str(right_current_position))
    #     print("Left = " + str(left_current_position))
    #     set_degree('r', right_current_position)
    #     set_degree('l', left_current_position)
    #     time.sleep(1)
    set_degree('r', 0)
    set_degree('l', 180)