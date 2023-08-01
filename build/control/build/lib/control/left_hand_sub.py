
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64
import time
from adafruit_servokit import ServoKit

# Servo 3 is Left Hand
current_position = 180
current_dir = 1 # 1 = going up and -1 = going down
left_hand_index = 3
nbPCAServo = 5

pca = ServoKit(channels=16)

class LeftHandSubscriber(Node):
    def __init__(self):
        self.initialize()
        
        super().__init__('left_hand_subscriber')
        self.sensor = self.create_subscription(
            Int64, 
            'sensors_pub', 
            self.callback, 
            10
        )
        self.sensor  

    def initialize(self):
        pca.servo[left_hand_index].set_pulse_width_range(500, 2500)
        set_degree(current_position)

    def callback(self, data):
        set_degree(180)
        # global current_position
        # if data.data == 1: #object detected on left
        #     current_position = 180
        #     set_degree(current_position)
        # else: # no object detected
        #     oscillate_hand()
       
def oscillate_hand():
    global current_position, current_dir
    if current_position == 0:
        current_position = 170
        set_degree(current_position)
    else:
        if current_position == 170:
            current_position = 140
        elif current_position == 140:
            current_position = 170
        time.sleep(1)
        set_degree(current_position)
        
    
def set_degree(degrees):
    pca.servo[left_hand_index].angle = degrees

def main(args=None):
    rclpy.init(args=args)
    left_hand_subscriber = LeftHandSubscriber()
    rclpy.spin(left_hand_subscriber)  
  
if __name__ == '__main__':
    main()
