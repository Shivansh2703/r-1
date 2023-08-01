import rclpy
from math import inf
from rclpy.node import Node
from std_msgs.msg import Int64
import RPi.GPIO as GPIO
import time


GPIO_IR = 25

class InfraredPublisher(Node):
    
    def __init__(self):
        
        self.initialize_gpio()
        
        super().__init__('infrared_right_publisher')
        self.publisher = self.create_publisher(Int64, 'infrared_right', 10)
        
        timer_period = 0.1       
        self.timer = self.create_timer(timer_period, self.timer_callback)
    
    
    def initialize_gpio(self):
        GPIO.setmode(GPIO.BCM)
        
        GPIO.setup(GPIO_IR, GPIO.IN)
    
    def timer_callback(self):
        my_message = Int64()
        gpio_input = GPIO.input(GPIO_IR)
        
        if gpio_input == 0: # object detected
            my_message.data = 1
            self.publisher.publish(my_message)
            self.get_logger().info("IR sensor detected object")
        else:
            my_message.data = 0
            self.publisher.publish(my_message)
            self.get_logger().info("Nothing detected")        
        
def main(args=None):
    rclpy.init(args=args)
    infrared_publisher = InfraredPublisher()
    rclpy.spin(infrared_publisher)
        
    infrared_publisher.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
