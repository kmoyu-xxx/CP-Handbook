f = []
with open("input.txt") as file:
    for _ in file:
        f.append(_.strip())

class Folder:
    def __init__(self, parent, name):
        self.parent = parent
        self.name = name 
        self.files = []
        self.folders = []
    
class File:
    def __init__(self, name, size):
        self.name = name
        self.size = size

folder_list = []

def getSize(folder):
    t = 0
    for f in folder.files:
        t += f.size 
    for f in folder.folders:
        t += getSize(f)
    folder_list.append(File(folder.name, t))
    return t

root = Folder(None, "/")
current = root

for command in f:
    if command[0:3] == "dir":
        folder_name = command.split()[1]
        current.folders.append(Folder(current, folder_name))
    elif command[0:4] == "$ cd":
        change_to = command.split()[2]
        if change_to == "..":
            current = current.parent 
        else:
            for folder in current.folders:
                if folder.name == change_to:
                    current = folder
                    break
    elif command[0:4] == "$ ls":
        continue
    else:
        command = command.split()
        current.files.append(File(command[1], int(command[0])))

getSize(root)
p1 = 0
for f in folder_list:
    if f.size < 100000:
        p1 += f.size 
print(p1)


cur_size = 0
for f in folder_list:
    if f.name == "/":
        cur_size = f.size

needed = cur_size - 40000000
p2 = 70000000
for f in folder_list:
    if f.size > needed:
        p2 = min(p2, f.size)
print(p2)