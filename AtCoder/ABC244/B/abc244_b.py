n = int(input())
t = input()

x, y = 0, 0
xp, yp = 1, 0

for _ in t:
    if _ == "S":
        x += xp
        y += yp
    else:
        if xp == 1:
            xp, yp = 0, -1
        elif yp == -1:
            xp, yp = -1, 0
        elif xp == -1:
            xp, yp = 0, 1
        else:
            xp, yp = 1, 0

print(x, y)

 