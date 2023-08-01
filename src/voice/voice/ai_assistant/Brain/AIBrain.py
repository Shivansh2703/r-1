# Open AI

#fileopen = open("Data\\Api.txt","r")
API = "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"
#API =  "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"
#API = "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"
#API = "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"
#fileopen.close()

import openai
from dotenv import load_dotenv

#Coding
openai.api_key = API
load_dotenv()
completion = openai.Completion()

def ReplyBrain(questions,chat_log = None):
    FileLog = open("/home/r1/r1_ws/src/voice/voice/ai_assistant/Data/chat_log.txt","r")
    chat_log_template = FileLog.read()
    FileLog.close()

    if chat_log is None:
        chat_log = chat_log_template
    prompt = f'{chat_log} You: {questions}\nr1: '
    response = completion.create(
        model = "gpt-3.5-turbo",
        prompt = prompt,
        temperature = 0.5,
        max_tokens = 60,
        top_p = 0.3,
        frequency_penalty = 0.5,
        presence_penalty = 0)
    answer = response.choices[0].text.strip()
    chat_log_template_update = chat_log_template + f"\nYou: {questions}\nr1: {answer}"
    FileLog = open("/home/r1/r1_ws/src/voice/voice/ai_assistant/Data/chat_log.txt","w")
    FileLog.write(chat_log_template_update)
    FileLog.close()
    return answer

#while True:
 #   kk = input("Enter: ")
  #  print(ReplyBrain(kk))
