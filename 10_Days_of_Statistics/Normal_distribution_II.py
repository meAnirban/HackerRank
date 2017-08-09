import math

def cdf(x, mu, sigma):
    return 0.5*(1 + math.erf((x-mu)/(sigma*2**0.5)))

mean,std = input().strip().split(" ")
q1 = int(input())
q2 = int(input())
a = round((cdf(q2, float(mean), float(std))*100), 2)
b = round(100-(cdf(q1, float(mean), float(std))*100), 2)

print(b)
print(100 - a)
print(a)






