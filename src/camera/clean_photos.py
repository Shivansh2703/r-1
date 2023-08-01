
from PIL import Image
import numpy as np
import os
import cv2
import time

def crop_to_face(image, current_dimensions, center_x, center_y, required_height=227, required_width=227):
    print(center_x, center_y)
    print(current_dimensions[1], current_dimensions[0])
    start_point = [center_x - 114, center_y - 114]
    end_point = [center_x + 113, center_y + 113]
    
    if center_x < 114:
        print("Test1")
        start_point[0] = 0
        end_point[0] = center_x + 113 + (114 - center_x)
    elif center_x > current_dimensions[1] - 113:
        print("Test2")
        end_point[0] = current_dimensions[1]
        difference = end_point[0] - center_x # 73
        start_point[0] = center_x - 114 - (113 - difference)
        print(start_point[0])
        
    if center_y < 114:
        print("Test3")
        start_point[1] = 0
        end_point[1] = center_y + 113 + (114 - center_y)
    elif center_y > current_dimensions[0] - 113:
        print("Test4")
        end_point[1] = current_dimensions[0]
        difference = end_point[1] - center_y
        start_point[1] = center_y - 114 - (113 - difference)


    # new_image = cv2.rectangle(image, (start_point[0], start_point[1]), (end_point[0], end_point[1]), (255, 0, 0), 2)
    new_image = image[start_point[1]:end_point[1], start_point[0]:end_point[0]]
    return new_image
    

if __name__ == '__main__':
    
    face_classifier = cv2.CascadeClassifier(
                                    cv2.data.haarcascades + "haarcascade_frontalface_default.xml"
                            )
    
    names = ['shivansh', 'dhananjay', 'kuldeep']
    directory = r'/home/r1/r1_ws/src/camera/faces/'
    
    for name in names:
        current_directory = directory + name
        os.chdir(current_directory)
        
        count = 1
        for photo in os.listdir(os.getcwd()):
            
            image = cv2.imread(photo)
            grey_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
            face = face_classifier.detectMultiScale(
                            grey_image, scaleFactor=1.1, minNeighbors=5, minSize=(40, 40)
                        )
            
            if len(face):
                center_x, center_y = int(face[0][0] + (face[0][2] / 2)), int(face[0][1] + (face[0][3] / 2))
                cropped_image = crop_to_face(image, image.shape, center_x, center_y)
                
                save_directory = directory + 'cleaned_images/' + name
                image_filename = save_directory + "/new_image_" + str(count) + ".jpeg"
                if (cropped_image.shape != (227, 227, 3)):
                    print(cropped_image.shape)
                    print(image_filename)
                cv2.imwrite(image_filename, cropped_image)
                count += 1
                
    