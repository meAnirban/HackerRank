import math

def mu(a, n):
    sum = 0
    for i in range(n):
        sum += a[i]
    return sum/n

def std(a, n, mu):
    sum = 0
    for i in range(n):
        sum += (a[i] - mu)**2
    return math.sqrt(sum/n)
        
def corr(n, x, y):
    sum = 0
    mu_x = mu(x, n)
    mu_y = mu(y, n)
    for i in range(n):
        sum += (x[i] - mu_x)*(y[i] - mu_y)
    return sum/(n*(std(x, n, mu_x)*std(y, n, mu_y)))



n = int(input())
x = list(map(float, input().strip().split(" ")))
y = list(map(float, input().strip().split(" ")))

print(round(corr(n, x, y), 3))



