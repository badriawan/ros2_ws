from setuptools import find_packages
from setuptools import setup

setup(
    name='navigation_1',
    version='0.0.0',
    packages=find_packages(
        include=('navigation_1', 'navigation_1.*')),
)
