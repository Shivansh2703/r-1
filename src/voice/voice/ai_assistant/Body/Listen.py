#from langdetect import detect
import speech_recognition as sr
from googletrans import Translator #pip install googletrans==3.1.0a0

#1. Listen : Hindi or English

def Listen():
        r = sr.Recognizer()

        with sr.Microphone() as source:
            print("Listening...")
            r.pause_threshold = 1
            audio = r.listen(source,0,5)


        try:
            print("Recognizing...")
            #   query = r.recognize_google(audio,languagr="hi")
            query = r.recognize_google(audio)

        except:
            return ""

        query = str(query).lower()
        return query

        #print(Listen())

    #2. Translate
def TranslationHindiToEng(Text):
    line = str(Text)
    translate = Translator()
    result = translate.translate(line)
    data = result.text
    print(f"You: {data}.")
    return data

    #TranslationHindiToEng("हेलो प्रवीण क्या हाल-चाल है")

    #3. Connect

def MicExecution():
    query = Listen()
    #    language = detect(query)
    #    if language=="hi":
    data = TranslationHindiToEng(query)
    #    else:
    #        data = query

    return data
