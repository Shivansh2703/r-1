
from pyfiglet import Figlet
import os

os.system("clear")
pyf = Figlet(font='puffy')
a = pyf.renderText("Video Chat App without Multi-Threading")
b = pyf.renderText("Client")
os.system("tput setaf 3")
print(a)
import socket,cv2, pickle,struct

# create socket
client_socket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)#  server ip address here
host_ip = '127.0.1.1' 
port = 9999
client_socket.connect((host_ip,port)) 
data = b""
metadata_size = struct.calcsize("Q")

while True:
    while len(data) < metadata_size:
        packet = client_socket.recv(4*1024) 
        if not packet: 
            break
        data += packet
            
    packed_msg_size = data[:metadata_size]
    data = data[metadata_size:]
    msg_size = struct.unpack("Q",packed_msg_size)[0]
    
    while len(data) < msg_size:
        data += client_socket.recv(4*1024)
        frame_data = data[:msg_size]
        data  = data[msg_size:]
        frame = pickle.loads(frame_data)

#def recordVideo():
 #   time.sleep(5)    
  #  while True:
   #     ret, frame = cap.read()
    #    d = frame.flatten()
     #   video = d.tostring()
      #  c.sendall(video)
       # time.sleep(0.2)

#def rcvVideo():
 #    while True:
  #        data, addr = s.recvfrom(230400)
   #       frames = ""
    #      frames += data
     #     if len(frames) == (230400):
      #     frame = numpy.fromstring (frames,dtype=numpy.uint8)
       #    frame = frame.reshape (240,320,3)
        #   cv2.imshow('frame',frame)
         #  frames=""
          # cv2.waitKey(1)
          #else:
           #frames=""

cv2.imshow("Receiving Video ",frame)
key = cv2.waitKey(10) 
if key  == 13:
    breakclient_socket.close()

