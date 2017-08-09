import numpy as np
from numpy import matrix

def inv(X):
    return X.I

def trans(X):
    return X.T

def multi(a, b):
    return a*b

def param(X, Y):
    return multi(multi(inv(multi(trans(X), X)), trans(X)), Y)

def predict(P, B):
    return multi(P, B)
    

m, n = [int(i) for i in input().strip().split(" ")]
M = [[float(j) for j in input().strip().split(" ")] for k in range(n)]
I = matrix(np.ones(n)).T
X = np.c_[I, matrix([M[i][:m] for i in range(n)])]
Y = matrix([M[i][-1] for i in range(n)]).T

B  = param(X, Y)
          
q = int(input())
I1 = matrix(np.ones(q)).T
P = np.c_[I1, matrix([[float(k) for k in input().strip().split(" ")] for i in range(q)])]

O = predict(P, B).tolist()

for i in range(4):
    print(round(O[i][0], 2))