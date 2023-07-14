t = int(input())

for _ in range(t):
    n = int(input())
    max_l = 0
    max_s = ""

    for _ in range(n):
        s, l = input().split()
        l = int(l)
        
        if l > max_l:
            max_l = l
            max_s = s
    
    print(max_s)