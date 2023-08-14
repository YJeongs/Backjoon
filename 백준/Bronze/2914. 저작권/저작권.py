a, i = map(int, input().split())
m = 0
if a != 1:
    i -= 1
    m = 1
m += i * a 
print(m)