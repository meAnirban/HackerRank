import math


avg, sigma = [float(e) for e in input().split()]
cdf = lambda x: 0.5 * (1 + math.erf((x - avg) / (sigma * (2 ** 0.5))))


# def normal(x, avg, sigma):
#     answer = 1 / (sigma * math.sqrt(2 * math.pi))
#     exponent = (x - avg) ** 2
#     exponent /= (2 * (sigma ** 2))
#     answer *= (math.e ** (-exponent))
#     return answer


temp1 = float(input())
print("%.2f"%(cdf(100.0) - cdf(temp1))*100)

temp1 = float(input())
print("%.2f"%(cdf(100.0) - cdf(temp1))*100)
print("%.2f"%(cdf(temp1) - cdf(0.0))*100)
