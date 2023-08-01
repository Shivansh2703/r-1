
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64
import time
from adafruit_servokit import ServoKit

# Servo 3 is Left Hand
left_current_position = 170
left_current_dir = 1 # 1 = going up and -1 = going down
left_hand_index = 3
# Servo 0 is Right Hand
right_current_position = 10
right_current_dir = 1 # 1 = going up and -1 = going down
right_hand_index = 0

nbPCAServo = 5
pca = ServoKit(channels=16)

class ArmsSubscriber(Node):
    def __init__(self):
        self.initialize()
        super().__init__('arms_subscriber')

        # self.sensor = self.create_subscription(
        #     Int64, 
        #     'sensors_pub', 
        #     self.callback, 
        #     10
        # )
        # self.sensor
        
        self.ir = self.create_subscription(
            Int64, 
            'ir_left_pub', 
            self.callback, 
            10
        )
        self.ir
    
    def initialize(self):
        pca.servo[right_hand_index].set_pulse_width_range(500, 2500)
        pca.servo[left_hand_index].set_pulse_width_range(500, 2500)
        set_degree('r', right_current_position)
        set_degree('l', left_current_position)
        
    def callback(self, data):
        global current_positio
        print(data.data)
    
        walk()
        
        

def walk():
    print("Walking")
    global left_current_position, left_current_dir, right_current_position, right_current_dir
    left_previous_position = left_current_position
    right_previous_position = right_current_position
    
    if left_previous_position == 170:
        right_current_position = 40
    elif left_previous_position == 140:
        right_current_position = 10
        
    if right_current_position == 40:
        left_current_position = 170
    elif right_current_position == 10:
        left_current_position = 140
        
    print("Right = " + str(right_current_position))
    print("Left = " + str(left_current_position))
    set_degree('r', right_current_position)
    set_degree('l', left_current_position)
    
    
def set_degree(hand ,degrees):
    if hand == 'r':
        pca.servo[right_hand_index].angle = degrees
    elif hand == 'l':
        pca.servo[left_hand_index].angle = degrees
        

def main(args=None):
    rclpy.init()
    arms_subscriber = ArmsSubscriber()
    rclpy.spin(arms_subscriber)  
  
if __name__ == '__main__':
    main()
