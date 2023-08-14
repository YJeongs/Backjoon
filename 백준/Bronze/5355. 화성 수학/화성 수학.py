t = int(input())

test_cases = []
for _ in range(t):
    values = input().split()
    test_cases.append(values)

result = []
for test in test_cases:
    num = float(test[0])
    operator = test[1:]

    for op in operator:
        if op == "@":
            num *= 3
        elif op == "%":
            num += 5
        else:
            num -= 7

    result.append(num)

for num in result:
    print("{:.2f}".format(num))