from setuptools import find_packages
from setuptools import setup

setup(
    name='lex_common_msgs',
    version='3.1.0',
    packages=find_packages(
        include=('lex_common_msgs', 'lex_common_msgs.*')),
)
