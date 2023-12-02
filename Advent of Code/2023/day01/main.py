f = []
with open("input.txt") as file:
    for _ in file:
        f.append(_.strip())

def part_one():
    l = []
    for word in f:
        numbers = list(filter(lambda c: c.isdigit(), list(word)))
        l.append(int(numbers[0] + numbers[-1]))
    print(sum(l))

def part_two():
    l = []
    digits = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    digits += [str(i) for i in range(1, 10)]
    for word in f:
        fronts, backs = [], []
        for d in digits:
            if word.find(d) != -1:
                fronts.append([word.find(d), d])
                backs.append([word.rfind(d), d])
        fronts.sort()
        backs.sort(reverse=True)
        first = fronts[0]
        last = backs[0]
        if first[1].isalpha():
            first = str(digits.index(first[1]) + 1)
        else:
            first = str(first[1])
        if last[1].isalpha():
            last = str(digits.index(last[1]) + 1)
        else:
            last = str(last[1])
        l.append(int(first + last))
    print(sum(l))
    
part_one()
part_two()