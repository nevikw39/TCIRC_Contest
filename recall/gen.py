import random
n = random.randrange(10, 2**31)
a = random.randrange(n // 4)
b = n
while a + b > n:
    b = random.randrange(n)
print("%d %d %d" % (n, a, b))