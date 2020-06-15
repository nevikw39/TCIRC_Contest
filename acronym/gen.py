import random
lst = [chr(i) for i in range(33, 127)]
for i in range(random.randrange(5, 25)):
    for j in range(random.randrange(5, 25)):
        print(random.choice(lst), end='')
    print(end=' ')