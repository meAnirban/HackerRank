#!/bin/python3

import sys

def mean(n, ar):
    sum = 0
    for x in ar:
        sum += x
    return sum/n

def median(n, ar):
    ar.sort()
    if(n%2 == 0):
        i=int(n/2)
        return (ar[i-1]+ar[i])/2
    else:
        i=int((n-1)/2)
        return ar[i]
        
def mode(n, ar):
    count, max = 0, 0
    current = 0
    ar.sort()
    for i in range(n):
        if(current == ar[i]):
            count += 1
        else:
            count = 1
            current = ar[i]
        if(count > max):
            max = count
            mode = ar[i]
    return mode

    


n = int(input())
ar = list(map(int, input().strip().split(' ')))
me = mean(n, ar)
md = median(n, ar)
mo = mode(n, ar)
print("%.1f"%me)
print("%.1f"%md)
print(mo)
