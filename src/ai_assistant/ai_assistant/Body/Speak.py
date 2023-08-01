import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import pyttsx3
from selenium import webdriver
from selenium.webdriver.support.ui import Select
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.by import By
from time import sleep

class TextToSpeech(Node):
    def __init__(self):
        super().__init__('speak')
        self.subscription = self.create_subscription(
            String,
            'recognized_text',
            self.speak_callback,
            10)
        self.subscription  # prevent unused variable warning

    def speak_callback(self,Text):
        self.get_logger().info('I heard: "%s"' % Text.data)
        engine = pyttsx3.init('espeak')
        voices = engine.getProperty('voices')
        engine.setProperty('voices',voices[0].id)
        engine.setProperty('rate',135)
        print("")
        print(f"You: {Text.data}.")
        print("")
        engine.say(Text.data)
        engine.runAndWait()

def main(args=None):
    rclpy.init(args=args)

    text_subscriber = TextToSpeech()

    rclpy.spin(text_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    text_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
# ======================================= #

#chrome_options = Options()
#chrome_options.add_argument('--log-level=3')
#chrome_options.headless = True
#Path = "/usr/local/bin/chromedriver"
#driver = webdriver.Chrome(Path,options=chrome_options)
#driver.maximize_window()
