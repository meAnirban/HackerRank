#!/bin/python3

import sys


n = int(input())
ar = list(map(int, input().strip().split(' ')))

ar.sort()
if(n% 2 ==0):
    l = ar[0:int(n/2)]
    u = ar[int(n/2):n]
    q2 = int((l[len(l)-1] + u[0])/2)
    if(len(l)%2 ==0):
        q1 = int((l[int(n/4)] + l[int(n/4 - 1)])/2)
        q3 = int((u[int(n/4)] + u[int(n/4 - 1)])/2)
    else:
        q1 = l[int(len(l)/2)]
        q3 = u[int(len(l)/2)]
             
else:
    q2 = ar[int(n/2)]
    l = ar[0:int(n/2)]
    u = ar[int((n+1)/2):n]
    if(len(l)%2 ==0):
        q1 = int((l[int(len(l)/2)] + l[int(len(l)/2) - 1])/2)
        q3 = int((u[int(len(l)/2)] + u[int(len(l)/2) - 1])/2)
    else:
        q1 = l[int(len(l)/2)]
        q3 = u[int(len(l)/2)]
           

print(q1)
print(q2)
print(q3)


