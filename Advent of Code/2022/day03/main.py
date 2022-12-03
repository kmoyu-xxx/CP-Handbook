f = []
with open("input.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_one():
    alphabet = list(".abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    same = []
    total = 0
    for x in f:
        first = x[0:len(x)//2]
        second = x[len(x)//2:]
        for item in first:
            if item in second:
                same.append(item)
                break
    for x in same:
        total += alphabet.index(x)
    print(total)

def part_two():
    alphabet = list(".abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    badges = []
    total = 0
    for i in range(0, len(f), 3):
        first = f[i]
        second = f[i+1]
        third = f[i+2]
        badge = set(first).intersection(set(second).intersection(third))
        badges.append(list(badge)[0])
    for x in badges:
        total += alphabet.index(x)
    print(total)