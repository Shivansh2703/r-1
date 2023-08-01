
from PIL import Image
import numpy as np
import os
import cv2
import time

if __name__ == '__main__':
    
    
    face_classifier = cv2.CascadeClassifier(
                                    cv2.data.haarcascades + "haarcascade_frontalface_default.xml"
                            )
    
    person_name = 'suhana'
    directory = r'/home/r1/r1_ws/src/camera/faces/' + person_name
    
    os.chdir(directory)
    
    
    count = 1
    while count < 14:
        cap = cv2.VideoCapture(0)
        ret, frame = cap.read()
                
        if ret == True:
            grey_image = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            face = face_classifier.detectMultiScale(
                            grey_image, scaleFactor=1.1, minNeighbors=5, minSize=(40, 40)
                        )
            if len(face): # face detected
                print("nice")
                # img = Image.fromarray(frame, "RGB")
                image_filename = "Image_" + str(count) + ".jpeg"
                cv2.imwrite(image_filename, frame)
                # img.save(image_filename)
                count += 1
                
        time.sleep(0.1)
        cap.release()