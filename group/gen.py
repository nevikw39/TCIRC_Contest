import random
n = random.randrange(5, 22)
m = random.randrange(n, min(n * (n - 1) // 2, 69))
print("%d %d" % (n, m))
s = set()
for _ in range(m):
    a = 0
    b = 0
    while a == b or (min(a, b), max(a, b)) in s:
        a = random.randrange(n)
        b = random.randrange(n)
    s.add((min(a, b), max(a, b)))
    print("%d %d" % (a, b))