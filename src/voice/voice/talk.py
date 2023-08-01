
import speech_recognition as sr
import pyttsx3
 
r = sr.Recognizer()
 

def SpeakText(command):
    print(command)
    engine = pyttsx3.init()
    engine.setProperty('rate', 120)
    engine.say(command)
    engine.runAndWait()
    
        
MyText = "Hi how are you kuldeep Sir!"
SpeakText(MyText)
        
