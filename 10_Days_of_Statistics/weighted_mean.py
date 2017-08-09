#!/bin/python3

import sys

def w_mean(n, x, w):
    sum = 0
    d = 0
    for i in range(n):
        sum += x[i]*w[i]
        d += w[i]
    return sum/d


    


n = int(input())
x = list(map(int, input().strip().split(' ')))
w = list(map(int, input().strip().split(' ')))
me = w_mean(n, x, w)
print("%.1f"%me)

