import rclpy
from rclpy.node import Node
from std_msgs.msg import String

#from Brain.QnA import QuestionAnswer
from Brain.AIBrain import ReplyBrain
from Body.Listen import MicExecution
print(">>Starting The r1: Wait for few seconds...")
from Body.Speak import Speak
from Features.Clap import Tester
from Features.Wakeup import WakeupDetected
from main import MainTaskExecution


class R1Brain(Node):
    def __init__(self):
        super().__init__('r1_brain')
        # Create two publishers
        self.publisher1 = self.create_publisher(String, 'query', 10)
        self.publisher2 = self.create_publisher(String, 'speak', 10)

        # Create two subscribers
        self.subscriber1 = self.create_subscription(
            String,
            'mic_execution',
            self.callback1,
            10
        )
        self.subscriber2 = self.create_subscription(
            String,
            'wakeup_detected',
            self.callback2,
            10
        )

        # Use a timer to publish messages periodically
        self.timer = self.create_timer(1.0, self.timer_callback)


    def MainExecution_callback(self,Data):
        topic_name = self.get_topic_name_from_subscription(Data.subscriber)
        if topic_name=='reply_brain':
            topic1 = Data.data
        elif topic_name=='mic_execution':
            topic2 = Data.data
        elif topic_name=='speak':
            topic3 = Data.data
            
        Speak("Hello Sir")
        Speak("I am r1, I'm Ready To Assist You Sir.") 

        while True:
            Data = MicExecution()
            Data = str(Data.data).replace(".","")

            ValueReturn = MainTaskExecution(Data.data)
            if ValueReturn==True:
                Speak(f"ok sir, i am going to open {Data.data}")


            if len(Data)<3:
                pass
            elif "who are you" in Data or "what's your name" in Data: 
                Speak("I am r1, created by kuldeep at roboprenr advanced learning centre")
            else:
                Reply = ReplyBrain(Data)
                Speak(Reply)

    def WakeupDetect_callback(self):
        query = WakeupDetected()
        if "True-Mic" in query:
            print("")
            print(">> r1 is getting ready... >>")
            print("")
            self.MainExecution()
        else:
            pass

def main(args=None):
    rclpy.init(args=args)
    r1 = R1Brain()
    #task_piblisher = WakeupDetect()
    rclpy.spin(r1)
    r1.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
