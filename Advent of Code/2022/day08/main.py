f = []
with open("input.txt") as file:
    for _ in file:
        f.append(_.strip())

h = len(f)
w = len(f[0])

visible = lambda x, y: any([
                             all([(f[y][x] > f[y][i]) for i in range(0,   x)]),
                             all([(f[y][x] > f[y][i]) for i in range(x+1, w)]),
                             all([(f[y][x] > f[j][x]) for j in range(0,   y)]),
                             all([(f[y][x] > f[j][x]) for j in range(y+1, h)])
                          ])

p1 = 0
for y in range(h):
    for x in range(w):
        p1 += visible(x, y)

print(p1)

def score(x, y):
    ret = 1
    for j in range(y-1, -1, -1):
        if f[j][x] >= f[y][x]: break
    ret *= y - j
    for j in range(y+1, h):
        if f[j][x] >= f[y][x]: break
    ret *= j - y
    for i in range(x-1, -1, -1):
        if f[y][i] >= f[y][x]: break
    ret *= x - i
    for i in range(x+1, w):
        if f[y][i] >= f[y][x]: break
    ret *= i - x
    return ret

p2 = 0
for y in range(1, h-1):
    for x in range(1, w-1):
        p2 = max(p2, score(x, y))

print(p2)