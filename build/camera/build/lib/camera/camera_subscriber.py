import os
os.environ["IMAGEIO_FFMPEG_EXE"] = "/usr/bin/ffmpeg"

import speech_recognition as sr 
 
os.system("arecord --format=S16_LE --rate=16000 --file-type=wav --duration=3 /home/r1/r1_ws/voice_testing/out.wav")
r = sr.Recognizer()

audio = sr.AudioFile("out.wav")

with audio as source:
  audio_file = r.record(source)
  
result = r.recognize_google(audio_file)

print(result)