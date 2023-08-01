#fileopen = open("Data\\Api.txt","r")
API = "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"
#fileopen.close()

import openai
from dotenv import load_dotenv

#Coding
openai.api_key = API
load_dotenv()
completion = openai.Completion()

def QuestionAnswer(questions,chat_log = None):
    FileLog = open("/home/r1/r1_ws/src/voice/voice/ai_assistant/Brain/Data/QnA_log.txt","r")
    chat_log_template = FileLog.read()
    FileLog.close()

    if chat_log is None:
        chat_log = chat_log_template
    prompt = f'{chat_log} Question: {questions}\nAnswer: '
    response = completion.create(
        model = "text-davinci-002",
        prompt = prompt,
        temperature = 0,
        max_tokens = 100,
        top_p = 1,
        frequency_penalty = 0,
        presence_penalty = 0)
    answer = response.choices[0].text.strip()
    chat_log_template_update = chat_log_template + f"\nQuestion: {questions}\nAnswer: {answer}"
    FileLog = open("/home/r1/r1_ws/src/voice/voice/ai_assistant/Brain/Data/QnA_log.txt","w")
    FileLog.write(chat_log_template_update)
    FileLog.close()
    return answer

while True:
    kk = input("Enter: ")
    print(QuestionAnswer(kk))
