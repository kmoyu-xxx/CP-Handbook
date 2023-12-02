f = []
with open("input.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_one():
    l = []
    for i in range(len(f)):
        line = f[i]
        game = line.split(": ")[-1]
        game = game.split("; ")
        r, b, g = [0, 0, 0]
        for x in game:
            x = x.split(", ")
            for _ in x:
                _ = _.split()
                if _[-1] == "red":
                    r = max(r, int(_[0]))
                elif _[-1] == "blue":
                    b = max(b, int(_[0]))
                elif _[-1] == "green":
                    g = max(g, int(_[0]))
        if r <= 12 and g <= 13 and b <= 14:
            l.append(i+1)
    print(sum(l))

def part_two():
    l = []
    for i in range(len(f)):
        line = f[i]
        game = line.split(": ")[-1]
        game = game.split("; ")
        r, b, g = [0, 0, 0]
        for x in game:
            x = x.split(", ")
            for _ in x:
                _ = _.split()
                if _[-1] == "red":
                    r = max(r, int(_[0]))
                elif _[-1] == "blue":
                    b = max(b, int(_[0]))
                elif _[-1] == "green":
                    g = max(g, int(_[0]))
        l.append(r*b*g)
    print(sum(l))

part_one()
part_two()