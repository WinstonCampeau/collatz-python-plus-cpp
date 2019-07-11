#! /usr/bin/python

import ctypes
import numpy
import glob
import matplotlib.pyplot as plt

libfile = glob.glob('build/*/collatz_cpp*.so')[0]

mylib = ctypes.CDLL(libfile)

mylib.collatz_cpp.restype = ctypes.c_longlong
mylib.collatz_cpp.argtypes = [ctypes.c_longlong]

print("Enter positive non-zero integer:")

x = input()

steps = []

print("Output: \n")

for i in range(1, x+1):
	#print mylib.collatz_cpp(i)
	steps.append(mylib.collatz_cpp(i))

	
x_val = list(range(1, x+1))


plt.scatter(x_val, steps, s=0.1)
plt.xlabel('Initial integer value')
plt.ylabel('Steps until convergence to 1')
plt.title('Collatz Conjecture by Computation')
plt.show()


#print steps, x_val



