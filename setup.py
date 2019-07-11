from setuptools import setup, Extension

setup(
	
	ext_modules=[Extension('collatz_cpp', ['collatz_cpp.cpp'],),],
)
