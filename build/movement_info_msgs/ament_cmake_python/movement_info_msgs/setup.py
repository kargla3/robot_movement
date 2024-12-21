from setuptools import find_packages
from setuptools import setup

setup(
    name='movement_info_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('movement_info_msgs', 'movement_info_msgs.*')),
)
