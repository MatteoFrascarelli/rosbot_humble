from setuptools import find_packages
from setuptools import setup

setup(
    name='publisher_and_subscriber',
    version='0.0.0',
    packages=find_packages(
        include=('publisher_and_subscriber', 'publisher_and_subscriber.*')),
)
