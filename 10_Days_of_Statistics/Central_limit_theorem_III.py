import math

def CLT(z , mu, sigma, n):
    return mu + z*sigma/math.sqrt(n)


n = int(input())
mu = int(input())
std = int(input())
p = float(input())
z = float(input())

print(round((CLT(-z, mu, std, n)), 2))
print(round((CLT(z, mu, std, n)), 2))
