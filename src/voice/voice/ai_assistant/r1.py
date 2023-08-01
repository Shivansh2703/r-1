
#from Brain.QnA import QuestionAnswer
from Brain.AIBrain import ReplyBrain
from Body.Listen import MicExecution
print(">>Starting The r1: Wait for few seconds...")
from Body.Speak import Speak
#from Features.Clap import Tester
from Features.Wakeup import WakeupDetected
#from main import MainTaskExecution


def MainExecution():
        Speak("Hello Sir")
        Speak("I am r1, I'm Ready To Assist You Sir.") 

        while True:
            Data = MicExecution()
            Data = str(Data).replace(".","")

            # ValueReturn = MainTaskExecution(Data)
            # if ValueReturn==True:
            #     Speak(f"ok sir, i am going to open {Data}")


            if len(Data)<3:
                pass
            elif "who are you" in Data or "what's your name" in Data: 
                Speak("I am r1, created by kuldeep at roboprenr advanced learning centre")
            else:
                Reply = ReplyBrain(Data)
                Speak(Reply)

def WakeupDetect():
        query = WakeupDetected()
        if "True-Mic" in query:
            print("")
            print(">> r1 is getting ready... >>")
            print("")
            MainExecution()
        else:
            pass
WakeupDetect()
