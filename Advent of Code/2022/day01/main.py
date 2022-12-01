f = []
with open("input.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_one():
    l = []
    cur = 0
    for x in f:
        if x.isdigit():
            cur += int(x)
        else:
            l.append(cur)
            cur = 0

    print(max(l))

def part_two():
    l = []
    cur = 0
    for x in f:
        if x.isdigit():
            cur += int(x)
        else:
            l.append(cur)
            cur = 0
    
    l.sort(reverse=True)
    print(l[0]+l[1]+l[2])