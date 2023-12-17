from setuptools import find_packages
from setuptools import setup

setup(
    name='navigation_',
    version='0.0.0',
    packages=find_packages(
        include=('navigation_', 'navigation_.*')),
)
