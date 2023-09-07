n = input()

cnt = 0
for k in range(1, int(n)+1):
    k = str(k)
    if len(k) <=2:
        cnt +=1
    else:
        if int(k[0]) - int(k[1]) == int(k[1]) - int(k[2]):
            cnt += 1

print(cnt)