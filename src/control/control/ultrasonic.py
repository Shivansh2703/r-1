import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import RPi.GPIO as GPIO
import time

GPIO_TRIGGER = 17
GPIO_ECHO = 13

class UltrasonicPublisher(Node):
    def __init__(self):
        super().__init__('ultrasonic_publisher')
        self.publisher_ = self.create_publisher(Float32, 'ultrasonic', 10)
        self.timer_ = self.create_timer(0.1, self.publish_data)
        self.initialize_gpio()

    def publish_data(self):
        distance = self.distance()

        message = Float32()
        message.data = distance
        self.publisher_.publish(message)
        self.get_logger().info("Distance = " + str(distance))

    def initialize_gpio(self):
        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BCM)

        GPIO.setup(GPIO_TRIGGER, GPIO.OUT)
        GPIO.setup(GPIO_ECHO, GPIO.IN)

    def distance(self):
        GPIO.output(GPIO_TRIGGER, True)
        time.sleep(0.00001)
        GPIO.output(GPIO_TRIGGER, False)

        StartTime = time.time()
        StopTime = time.time()

        while GPIO.input(GPIO_ECHO) == 0:
            StartTime = time.time()

        while GPIO.input(GPIO_ECHO) == 1:
            StopTime = time.time()

        TimeElapsed = StopTime - StartTime
        distance = (TimeElapsed * 34300) / 2

        return distance

def main(args=None):
    rclpy.init(args=args)
    ultrasonic_publisher = UltrasonicPublisher()
    rclpy.spin(ultrasonic_publisher)
    ultrasonic_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
