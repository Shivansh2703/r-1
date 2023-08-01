
import speech_recognition as sr
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class WakeupDetector(Node):

    def __init__(self):
        super().__init__('wakeup_publisher')
        self.publisher_ = self.create_publisher(String, 'wakeup', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.WakeupDetect_callback)
        self.i = 0

    def Listen(self):

        r = sr.Recognizer()

        with sr.Microphone() as source:
            print("Listening...")
            r.pause_threshold = 1
            audio = r.listen(source,0,3) # Listening Mode.....
        
        try:
            print("Recognizing...")
            query = r.recognize_google(audio,language="en")

        except:
            return ""
        
        query = str(query).lower()
        print(query)
        return query

    def WakeupDetect_callback(self):

        while True:

            queery = self.Listen().lower()

            if "wake up" in queery:
                msg = String()
                msg.data = "True-Mic"
                self.publisher_.publish(msg)

            else:
                pass

def main(args=None):
    rclpy.init(args=args)

    wakeup_detector = WakeupDetector()

    rclpy.spin(wakeup_detector)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    wakeup_detector.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

    

#print(WakeupDetected())
