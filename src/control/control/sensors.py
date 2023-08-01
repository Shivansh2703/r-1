import rclpy
import threading
from rclpy.node import Node
from std_msgs.msg import Int64, Float32
 
decision = 0
 
class SensorsSubscriber(Node):
    
    def __init__(self):
        self.front_distance = 10000
        self.object_left = 0
        self.object_right = 0
        self.face_detection = 0
        
        super().__init__('sensors_subscriber')
        
        self.detection = self.create_subscription(
            Int64, 
            'face_detected', 
            self.detection_callback, 
            10
        )
        self.detection

        self.ultrasonic = self.create_subscription(
            Float32, 
            'ultrasonic', 
            self.ultrasonic_callback, 
            10
        )
        self.ultrasonic

        self.infrared_left = self.create_subscription(
            Int64, 
            'infrared_left', 
            self.infrared_left_callback, 
            10
        )
        self.infrared_left
        
        self.infrared_right = self.create_subscription(
            Int64, 
            'infrared_right', 
            self.infrared_right_callback, 
            10
        )
        self.infrared_right
        
    def detection_callback(self, data):
        self.face_detection = data.data
        
    def ultrasonic_callback(self, data):
        self.front_distance = data.data
    
    def infrared_left_callback(self, data):
        self.object_left = data.data
    
    def infrared_right_callback(self, data):
        self.object_right = data.data
        self.make_decision()
        
    def make_decision(self):
        global decision
        if self.face_detection:
            decision = 1
        elif (self.front_distance < 10) and (self.object_left) and (self.object_right): # Objects on all sides
            decision = 2
        elif (self.front_distance < 10) and (self.object_left) and not (self.object_right): # Objects in front and left but right is empty
            decision = 3
        elif (self.front_distance < 10) and not (self.object_left) and  (self.object_right): # Objects in front and right but left is empty
            decision = 4
        elif (self.front_distance < 10) and not (self.object_left) and not (self.object_right): # Object in front but left and right are empty
            decision = 5
        elif (self.front_distance > 10) and (self.object_left) and (self.object_right): # Objects on left and right but front is empty
            decision = 6
        elif (self.front_distance > 10) and (self.object_left) and not (self.object_right): # Object on left but front and right are empty
            decision = 7
        elif (self.front_distance > 10) and not (self.object_left) and (self.object_right): # Object on right but front and left are empty
            decision = 8
        else: #no objects
            decision = 9


class SensorsPublisher(Node):
    
    def __init__(self):
        
        super().__init__('sensors_publisher')
        self.publisher = self.create_publisher(Int64, 'sensors_pub', 10)
        
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
    def timer_callback(self):
        my_message = Int64()
        global decision
        my_message.data = decision
        
        self.publisher.publish(my_message)
        self.get_logger().info("Publishing: " + str(my_message.data))
        
        
def main(args=None):
    rclpy.init(args=args)
    
    sensor_subscriber = SensorsSubscriber()
    sensor_publisher = SensorsPublisher()  
    
    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(sensor_subscriber)
    executor.add_node(sensor_publisher)
                      
    executor_thread = threading.Thread(target=executor.spin, daemon=True)
    executor_thread.start()
    
    rate = sensor_subscriber.create_rate(2)
    
    try:
        while rclpy.ok():
            rate.sleep()
    except KeyboardInterrupt:
        pass
    
    rclpy.shutdown()
    executor_thread.join()
        
    
    
if __name__ == '__main__':
    main()
