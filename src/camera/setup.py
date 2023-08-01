from setuptools import setup

package_name = 'camera'

setup(
    name=package_name,
    version='0.0.0',
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
            'img_pub = camera.camera_publisher:main',
            'frames_sub = camera.frame_subscriber:main',
            'camera_node = camera.camera_node:main',
            'path_planning_node = camera.path_planning:main',
        ],
    },
)
