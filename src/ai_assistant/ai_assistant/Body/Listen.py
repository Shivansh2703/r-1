#from langdetect import detect
import speech_recognition as sr
from googletrans import Translator #pip install googletrans==3.1.0a0
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

#1. Listen : Hindi or English
class SpeechRecognizer(Node):
    def __init__(self):
        super().__init__('speech_recognizer')
        self.publisher_ = self.create_publisher(String, 'recognized_text', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.MicExecution_callback)
        
    def Listen(self):
        r = sr.Recognizer()
        with sr.Microphone() as source:
            print("Listening...")
            r.pause_threshold = 1
            audio = r.listen(source,0,5)


        try:
            print("Recognizing...")
    #       query = r.recognize_google(audio,languagr="hi")
            query = r.recognize_google(audio)

        except:
            return ""

        query = str(query).lower()
        return query

    #print(Listen())

    #2. Translate

    def TranslationHindiToEng(self,Text):
        line = str(Text)
        translate = Translator()
        result = translate.translate(line)
        data = result.text
        print(f"You: {data}.")
        return data


    #3. Connect

    def MicExecution_callback(self):
        query = self.Listen()
        msg = String()
        msg.data = self.TranslationHindiToEng(query)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
    
def main(args=None):
    rclpy.init(args=args)

    Speech_recognizer = SpeechRecognizer()

    rclpy.spin(Speech_recognizer)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    Speech_recognizer.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

