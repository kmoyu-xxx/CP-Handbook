n = int(input())
if n % 5 == 0:
    print(str(n//5) + "x5")
elif n % 4 == 0:
    print(str(n//4) + "x4")
else:
    print(str(n//3) + "x3")