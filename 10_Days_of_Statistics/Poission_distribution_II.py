
def cost_a(a):
    return (160 + 40*(a + a**2))
    
def cost_b(b):
    return (128 + 40*(b + b**2))


s = input().strip().split(" ")
a = float(s[0])
b = float(s[1])

print("%.3f"%cost_a(a))
print("%.3f"%cost_b(b))