# Open AI
#fileopen = open("Data\\Api.txt","r")
#API = "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"
API = "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"
#fileopen.close()

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import openai
from dotenv import load_dotenv

openai.api_key = API
load_dotenv()
completion = openai.Completion()

class AIBrain(Node):
    def __init__(self):
        super().__init__('AIBrain')
        self.publisher_ = self.create_publisher(String, 'response', 10)
        # Create a subscriber for the 'my_topic' topic
        self.subscription = self.create_subscription(
            String,
            'query',
            self.ReplyBrain_callback,
            10
        )
        self.subscription

    def ReplyBrain_callback(self, questions,chat_log = None):
        self.get_logger().info('Received message: %s' % questions.data)
        FileLog = open("/home/r1/r1_ws/src/voice/voice/ai_assistant/Data/chat_log.txt","r")
        chat_log_template = FileLog.read()
        FileLog.close()

        if chat_log is None:
            chat_log = chat_log_template
        prompt = f'{chat_log} You: {questions.data}\nr1: '
        response = completion.create(
            model = "text-davinci-002",
            prompt = prompt,
            temperature = 0.2,
            max_tokens = 16,
            top_p = 0.3,
            frequency_penalty = 0.5,
            presence_penalty = 0)
        answer = String()
        answer.data = response.choices[0].text.strip()
        self.publisher_.publish(answer)
        chat_log_template_update = chat_log_template + f"\nYou: {questions}\nr1: {answer}"
        FileLog = open("/home/r1/r1_ws/src/voice/voice/ai_assistant/Data/chat_log.txt","w")
        FileLog.write(chat_log_template_update)
        FileLog.close()

def main(args=None):
    rclpy.init(args=args)

    ai_brain = AIBrain()

    rclpy.spin(ai_brain)

    ai_brain.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

#while True:
 #   kk = input("Enter: ")
  #  print(ReplyBrain(kk))
