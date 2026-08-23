import math

n = int(input("n: "))
p = float(input("p: "))
x = int(input("start-x: "))
end = int(input("end-x: "))
accum = 0

# c = (math.factorial(n))/(math.factorial(x) * math.factorial(n - x))
# pofx = c * math.pow(p, x) * math.pow((1 - p), n - x)

for i in range(x, end + 1):
    c = (math.factorial(n))/(math.factorial(i) * math.factorial(n - i))
    pofx = c * math.pow(p, i) * math.pow((1 - p), n - i)
    accum += pofx

print(accum)
