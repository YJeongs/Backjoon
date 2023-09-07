n = int(input())

num = list(map(int, input().split()))

cnt = 0
for i in num:
    checked = True
    for j in range(2, i):
        if i % j == 0: #소수가 아님
            checked = False
            break

    if i >= 2 and checked:
        cnt += 1

print(cnt)