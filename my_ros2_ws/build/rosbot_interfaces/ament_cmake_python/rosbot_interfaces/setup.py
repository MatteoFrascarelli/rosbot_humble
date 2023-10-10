from setuptools import find_packages
from setuptools import setup

setup(
    name='rosbot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('rosbot_interfaces', 'rosbot_interfaces.*')),
)
