#!/bin/python3

import sys

def mean(n, ar):
    sum = 0
    for i in range(n):
        sum += ar[i]
    return sum/n

def std(n, ar, m):
    sum1 = 0
    for i in range(n):
        sum1 += (ar[i] - m)**2
    std = pow((sum1/n), 0.5)
    return std

n = int(input())
ar = list(map(int, input().strip().split(' ')))
ar.sort()
m = mean(n, ar)
std = std(n, ar, m)

print("%.1f"%std)



