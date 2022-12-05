f = []
with open("input.txt") as file:
    for _ in file:
        f.append(_.strip())

boxes = [
    list("PFMQWGRT"),
    list("HFR"),
    list("PZRVGHSD"),
    list("QHPBFWG"),
    list("PSMJH"),
    list("MZTHSRPL"),
    list("PTHNML"),
    list("FDQR"),
    list("DSCNLPH")
]

for x in f:
    s = x.split()
    move = int(s[1])
    fro = int(s[3]) - 1
    to = int(s[5]) - 1
    boxes[to].extend(boxes[fro][-move:])
    for i in range(move):
        boxes[fro].pop()

for x in boxes:
    print(x[-1])