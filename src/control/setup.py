from setuptools import setup

package_name = 'control'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='r1',
    maintainer_email='r1@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'us_pub = control.ultrasonic:main',
            'ir_left_pub = control.infrared_left:main',
            'ir_right_pub = control.infrared_right:main',
            'sensors_sub = control.sensors:main',
            'base_sub = control.base:main',
            'left_hand_sub = control.left_hand_sub:main',
            'right_hand_sub = control.right_hand_sub:main',
            'head_sub = control.head:main',
            'eyes_sub = control.eyes:main',
            'arms_sub = control.arms:main'
        ],
    },
)
