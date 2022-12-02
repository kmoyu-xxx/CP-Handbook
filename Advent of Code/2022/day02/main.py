f = []
with open("input.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_one():
    d = {
        "X": 1,
        "Y": 2,
        "Z": 3
    }
    o = {
        "X": {"A": 3, "B": 0, "C": 6},
        "Y": {"A": 6, "B": 3, "C": 0},
        "Z": {"A": 0, "B": 6, "C": 3}
    }
    total = 0
    for x in f:
        op, me = x.split()
        total += d[me]
        total += o[me][op]
    print(total)

def part_two():
    d = {
        "X": 0,
        "Y": 3,
        "Z": 6
    }
    o = {
        "X": {"A": 3, "B": 1, "C": 2},
        "Y": {"A": 1, "B": 2, "C": 3},
        "Z": {"A": 2, "B": 3, "C": 1}
    }
    total = 0
    for x in f:
        op, me = x.split()
        total += d[me]
        total += o[me][op]
    print(total)