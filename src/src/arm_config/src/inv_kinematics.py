import numpy as np
import matplotlib.pyplot as plt
#from matplotlib.animation import FuncAnimation
from math import acos, atan2, cos, sin, degrees, radians

# link length
l1 = 5
l2 = 5

# specifying the final position of end effector
x = 4
y = 4

# specifying initial configuration joint angles (in degrees)
theta1_init = 0
theta2_init = 0

##=====First solution (using JJ Craig’s geometric solution for inverse kinematics)======

cos2 = (x**2 + y**2 - l1**2 - l2**2) / (2 * l1 * l2)
theta2 = -acos(cos2) # Taking the negative value theta2 for first solution

beta = atan2(y, x)
cos_psi = cos2 = (x**2 + y**2 + l1**2 - l2**2) / (2 * l1 * (x**2 + y**2)**0.5)
psi = acos(cos_psi)

if theta2 < 0:
    theta1 = beta + psi
else:
    theta1 = beta - psi

first_sol_degrees = np.array([theta1, theta2]) * 180 / np.pi		# changing radians to degrees

##=======================second solution============================

cos2 = (x**2 + y**2 - l1**2 - l2**2) / (2 * l1 * l2)
theta2 = -acos(cos2)		# Taking the negative value theta2 for second solution

beta = atan2(y,x)
cos_psi = cos2 = (x**2+y**2+l1**2-l2**2)/(2*l1*(x**2+y**2)**0.5)
psi = acos(cos_psi)

if theta2<0:
    theta1 = beta + psi
else:
    theta1 = beta-psi
second_sol_degrees = np.array([theta1, theta2]) * 180 / np.pi		# changing radians to degrees

##=========Plotting the first solution using forward kinematics code===========

theta1_f = first_sol_degrees[0]
theta2_f = first_sol_degrees[1]

fig, ax = plt.subplots()
ax.set_xlabel('x-coordinate (units)')
ax.set_ylabel('y-coordinate (units)')
ax.set_title('1st Inverse Kinematics solution of 2 link planar Manipulator')
ax.set_aspect('equal')
ax.grid(True)

def animate(i):
    th1 = np.linspace(theta1_init, theta1_f, 100)
    th2 = np.linspace(theta2_init, theta2_f, 100)

    # DH Parameters
    a = np.array([0, l1, l2])		# link length
    alp = np.array([0, 0, 0])		# Link twists
    d = np.array([0, 0, 0])     		# offset
    th = np.array([th1[i], th2[i], 0])	# Joint angles

    # calculating the transformation matrices
    c1 = cos(radians(th1[i]));		s1 = sin(radians(th1[i]))
    c2 = cos(radians(th2[i]));		s2 = sin(radians(th2[i]))

    T1 = np.array([[c1, -s1, 0, a[0]],
                   [s1, c1, 0, 0],
                   [0, 0, 1, 0],
                   [0, 0, 0, 1]]) 
    T2 = np.array([[c2, -s2, 0, a[1]],
                   [s2, c2, 0, 0],
                   [0, 0, 1, 0],
                   [0, 0, 0, 1]])
    T3 = np.array([[1, 0, 0, a[2]],
                   [0, 1, 0, 0],
                   [0, 0, 1, 0],
                   [0, 0, 0, 1]])
    Joint1_pos = np.dot(T1, np.dot(T2, np.array([[0],[0],[0],[1]])))   #getting joint1 position in homogenious co-ordinates
    Joint2_pos = np.dot(T1, np.dot(T2, np.dot(T3, np.array([[0],[0],[0],[1]]))))    #getting joint2 position in homogenious co-ordinates

    x = np.array([0, Joint1_pos[0], Joint2_pos[0]])
    y = np.array([0, Joint1_pos[1], Joint2_pos[1]])
    print(x)
    print(y)