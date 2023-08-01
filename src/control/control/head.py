import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64
import time
from adafruit_servokit import ServoKit

# Servo 0 is Right Hand
current_position = 's' # 0 is right and 180 is left
head_index = 4

pca = ServoKit(channels=16)

class HeadSubscriber(Node):
    def __init__(self):
        self.initialize()
        self.object_right = 0
        self.object_left = 0
        
        super().__init__('head_subscriber')
        self.get_logger().info("Starting up")

        self.sensor = self.create_subscription(
            Int64, 
            'sensors_pub', 
            self.callback, 
            10
        )
        self.sensor

    def initialize(self):
        pca.servo[head_index].set_pulse_width_range(500, 2500)
        set_degree(80)
        
    def callback(self, data):
       # set_degree('s')
        print(data.data)
        if data.data in [1, 2, 5, 6, 7, 8, 9] and current_position != 's':
            set_degree('s')
        elif data.data == 3 and current_position != 'r': # Objects in front and left but right is empty
            set_degree('r')
        elif data.data == 4 and current_position != 'l': # Objects in front and right but left is empty
            set_degree('l')
               
def set_degree(dir):
    if dir == 's':
        pca.servo[head_index].angle = 80
    elif dir == 'r':
        pca.servo[head_index].angle = 35
    elif dir == 'l':
        pca.servo[head_index].angle = 125

def main(args=None):
    rclpy.init(args=args)
    head_subscriber = HeadSubscriber()
    rclpy.spin(head_subscriber)
    head_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
