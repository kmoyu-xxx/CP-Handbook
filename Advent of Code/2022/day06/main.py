f = []
with open("input.txt") as file:
    for _ in file:
        f.append(_.strip())

line = f[0]
p1 = 0
p2 = 0

l = []
left,right = 0, 4

while True:
    l = line[left:right]
    if len(set(l)) == len(l):
        break
    left += 1
    right += 1

p1 = right

left,right = 0, 14

while True:
    l = line[left:right]
    if len(set(l)) == len(l):
        break
    left += 1
    right += 1

p2 = right

print(p1)
print(p2)