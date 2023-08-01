# Simple demo of of the PCA9685 PWM servo/LED controller library.
# This will move channel 0 from min to max position repeatedly.
# Author: Tony DiCola
# License: Public Domain
from __future__ import division
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import Adafruit_PCA9685


# Uncomment to enable debug output.
#import logging
#logging.basicConfig(level=logging.DEBUG)

# Initialise the PCA9685 using the default address (0x40).
pwm = Adafruit_PCA9685.PCA9685()

# Alternatively specify a different address and/or bus:
#pwm = Adafruit_PCA9685.PCA9685(address=0x41, busnum=2)

# Configure min and max servo pulse lengths
servo_min = 150  # Min pulse length out of 4096
servo_max = 600  # Max pulse length out of 4096

class RightServoControl(Node):
    def __init__(self):
        super().__init__('right_hand_subscriber')
        self.subscription = self.create_subscription(
            String,
            'ctrl_right_hand',
            self.run_servo_callback,
            10)
        self.subscription  # prevent unused variable warning

    # Helper function to make setting a servo pulse width simpler.
    def set_servo_pulse(self,channel, pulse):
        pulse_length = 1000000    # 1,000,000 us per second
        pulse_length //= 60       # 60 Hz
        print('{0}us per period'.format(pulse_length))
        pulse_length //= 4096     # 12 bits of resolution
        print('{0}us per bit'.format(pulse_length))
        pulse *= 1000
        pulse //= pulse_length
        pwm.set_pwm(channel, 0, pulse)

    # Set frequency to 60hz, good for servos.
    pwm.set_pwm_freq(60)

    print('Moving servo on channel 0, press Ctrl-C to quit...')
    def run_servo_callback(self,data):
        # Move servo on channel 4 (head) between extremes.
        if data.data=="right":
            pwm.set_pwm(4, 0, servo_min)
        if data.data=="left":
            pwm.set_pwm(4, 0, servo_max)
            

def main(args=None):
    rclpy.init(args=args)

    right_srvo_control = RightServoControl()

    rclpy.spin(right_srvo_control)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    right_srvo_control.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()