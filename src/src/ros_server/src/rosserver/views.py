from django.shortcuts import render, redirect

def index(request):
    return render(request,'index.html')

def main(request):
    return render(request,'main.html')

def wheel(request):
    return render(request,'wheel.html')

def servo(request):
    return render(request,'servo.html')



import rospy
from std_msgs.msg import Int16
from django.http import JsonResponse
# from roslibpy import Ros, Topic
# from std_msgs.msg import String
from django.views.decorators.csrf import csrf_exempt


rospy.init_node('base_controler')


@csrf_exempt
def robot_control(request):
    print("Its comming")
    print(request.GET['command'])
    data = int(request.GET['command'])
    topic_name = '/base'
    pub = rospy.Publisher(topic_name,Int16,queue_size=10)

    port = 8080
    pub.publish(int(data))
    return JsonResponse({'status': 'success'})

@csrf_exempt
def head(request):
    print("Its comming under head")
    print(request.GET['command'])
    data = int(request.GET['command'])
    topic_name = '/head'
    pub = rospy.Publisher(topic_name,Int16,queue_size=10)

    port = 8080
    pub.publish(int(data))
    return JsonResponse({'status': 'success'})

@csrf_exempt
def left(request):
    print("Its comming under head")
    print(request.GET['command'])
    data = int(request.GET['command'])
    topic_name = '/leftHand'
    pub = rospy.Publisher(topic_name,Int16,queue_size=10)

    port = 8080
    pub.publish(int(data))
    return JsonResponse({'status': 'success'})

@csrf_exempt
def right(request):
    print("Its comming under head")
    print(request.GET['command'])
    data = int(request.GET['command'])
    topic_name = '/rightHand'
    pub = rospy.Publisher(topic_name,Int16,queue_size=10)

    port = 8080
    pub.publish(int(data))
    return JsonResponse({'status': 'success'})

if __name__ == '__main__':
    rospy.spin()