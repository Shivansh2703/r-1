#!/usr/bin/python3

import os 
import keyboard
import pyautogui
import webbrowser
from time import sleep

def OpenExe(Query):
    Query = str(Query).lower()
    if "visit" in Query:
        NameOfWeb = Query.replace("visit","")
        Link = f"https://www.{NameOfWeb}.com"
        webbrowser.open(Link)

    elif "open" in Query:
        """# os.startfile("path\to\file.exe")
        NameOfTheApp = Query.replace("open","")
        pyautogui.press('win')
        sleep(1)
        keyboard.write('NameOfTheApp')
        sleep(1)
        keyboard.press('enter')
        sleep(0.5) """
        return True

        
        
    elif "start" in Query:
        NameOfTheApp = Query.replace("open","")
        pyautogui.press('win')
        sleep(1)
        keyboard.write('NameOfTheApp')
        sleep(1)
        keyboard.press('enter')
        sleep(0.5)
        return True

OpenExe('visit wikipedia')
