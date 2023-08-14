t = int(input())
test_cases = []
for i in range(t):
    a, b = map(int, input().split())
    test_cases.append((a,b))

test_num = 1
for test in test_cases:
    a, b = test
    sum = a + b
    print("Case #{}: {} + {} = {}".format(test_num, a, b, sum))
    test_num += 1