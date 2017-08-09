

def fact(n):
    if(n <= 1):
        return 1
    return n*fact(n-1)

def comb(n, x):
    f = fact(n)/(fact(x)*fact(n-x))
    return f
    
def binomial_1(p, n):
    prob = 0
    q = 1-p
    for i in range(0,3):
        prob += comb(n, i)*(p**i)*(q**(n-i))
    return prob
    
    

def binomial_2(p, n):
    prob1 = 0
    q = 1-p
    for i in range(2,(n+1)):
        prob1 += comb(n, i)*(p**i)*(q**(n-i))
    return prob1
    
    

s = input().strip().split(" ")
p, n = s
print(round(binomial_1((int(p)/100), int(n)), 3))
print(round(binomial_2((int(p)/100), int(n)), 3))
