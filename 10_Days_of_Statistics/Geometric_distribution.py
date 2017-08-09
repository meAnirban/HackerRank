

def geo_dist(n, p):
    q = 1-p
    return p*(q**(n-1))



a = input().strip().split(" ")
n = int(input())
p = int(a[0])/int(a[1])

print(round(geo_dist(n, p),3))
