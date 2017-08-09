
def fact(k):
    if(k<=1):
        return 1
    return k*fact(k-1)

def pois_dist(n, k):
    e = 2.71828
    return (n**k)*(e**(-n))/fact(k)

n = float(input())
k = int(input())

print("%.3f"%pois_dist(n, k))