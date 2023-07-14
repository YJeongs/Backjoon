n = int(input())

i = 2
while n != 0:
    if n == 1:
        break
    d = n % i
    if d == 0:
        print(i)
        n //= i
    else:
        i += 1
    