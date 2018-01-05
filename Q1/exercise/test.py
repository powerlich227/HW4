from ctypes import *
from math import pi
Max= 10000
step=5
Mstep=90/5
lib = CDLL('./libTest.so')
gettheta = lib.gettheta
gettheta.restype = c_double
a = gettheta()
print a
