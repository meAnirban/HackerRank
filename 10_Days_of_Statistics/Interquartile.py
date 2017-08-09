
s = int(input())
x = list(map(int, input().strip().split(' ')))
f = list(map(int, input().strip().split(' ')))

ar = []
for i in range(0, len(f)):
    for j in range(0, f[i]):
        ar.append(x[i])
    
    
    
ar.sort()
n = len(ar)
if(n% 2 ==0):
    l = ar[0:int(n/2)]
    u = ar[int(n/2):n]
    q2 = int((l[len(l)-1] + u[0])/2)
    if(len(l)%2 ==0):
        q1 = int((l[int(n/4)] + l[int(n/4 - 1)])/2)
        q3 = int((u[int(n/4)] + u[int(n/4 - 1)])/2)
    else:
        q1 = l[int(len(l)/2)]
        q3 = u[int(len(l)/2)]
             
else:
    q2 = ar[int(n/2)]
    l = ar[0:int(n/2)]
    u = ar[int((n+1)/2):n]
    if(len(l)%2 ==0):
        q1 = int((l[int(len(l)/2)] + l[int(len(l)/2) - 1])/2)
        q3 = int((u[int(len(l)/2)] + u[int(len(l)/2) - 1])/2)
    else:
        q1 = l[int(len(l)/2)]
        q3 = u[int(len(l)/2)]
           
q = (q3 -q1)
print("%.1f"%q)


