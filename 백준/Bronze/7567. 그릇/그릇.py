shape = input()
height = 10
for i in range(len(shape)-1):
    if shape[i:i+2] == "()":
        height += 10
    elif shape[i:i+2] == ")(":
        height += 10
    elif shape[i:i+2] == "((":
        height += 5
    else:
        height += 5

print(height)