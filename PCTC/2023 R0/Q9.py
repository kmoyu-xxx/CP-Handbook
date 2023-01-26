code = ['0','0','0','0','0']

for i in range(5):
    x = input()
    code[int(x[0]) - 1] = x[1]

print("".join(code))