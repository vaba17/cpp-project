#!/usr/bin/python3
from math import pi, ceil,sin
a = input().split()
a[0]=int(a[0])
a[1]=int(a[1])
print (ceil(a[0]/sin(a[1]*(pi/180))))
