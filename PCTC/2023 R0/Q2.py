a, b, c, d = [int(input()) for i in range(4)]
if a/b > c/d:
    print(1)
elif c/d > a/b:
    print(2)
else:
    print("same")