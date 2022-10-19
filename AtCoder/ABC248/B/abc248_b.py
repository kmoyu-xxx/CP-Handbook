import math
a, b, k = map(int, input().split())
i = 0
while True:
    if a >= b:
        print(i)
        break
    else:
        a *= k
        i += 1