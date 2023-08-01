import pyttsx3
from selenium import webdriver
from selenium.webdriver.support.ui import Select
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.by import By
from time import sleep

def Speak(Text):
    engine = pyttsx3.init('espeak')
    voices = engine.getProperty('voices')
    engine.setProperty('voices',voices[0].id)
    engine.setProperty('rate',135)
    print("")
    print(f"You: {Text}.")
    print("")
    engine.say(Text)
    engine.runAndWait()

Speak("Hello sir!")

# ======================================= #

#chrome_options = Options()
#chrome_options.add_argument('--log-level=3')
#chrome_options.headless = True
#Path = "/usr/local/bin/chromedriver"
#driver = webdriver.Chrome(Path,options=chrome_options)
#driver.maximize_window()
