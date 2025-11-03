from setuptools import find_packages
from setuptools import setup

setup(
    name='ysk_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('ysk_msgs', 'ysk_msgs.*')),
)
