
def geo_dist(n, p):
    q = 1-p
    sum = 0
    for i in range(1,n+1):
        sum += p*(q**(i-1))
    return sum



a = input().strip().split(" ")
n = int(input())
p = int(a[0])/int(a[1])

print(round(geo_dist(n, p),3))