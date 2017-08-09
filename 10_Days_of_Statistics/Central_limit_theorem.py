import math

def cdf(x, mean, std):
    return round(0.5 * (1 + math.erf((x - mean)/ (std * math.sqrt(2)))), 4)
print(cdf(9800, 49 * 205, math.sqrt(49) * 15))