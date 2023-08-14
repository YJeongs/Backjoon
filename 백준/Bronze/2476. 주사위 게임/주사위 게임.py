n = int(input())
nums = []
for i in range(n):
    values = input().split()
    row = list(map(int, values))
    nums.append(row)

rewards = []
for row in nums:
    max_count = 0 #같은 숫자가 나온 횟수
    max_num = 0 #같은 수
    count_dict = {}

    for num in row:
        if num in count_dict:
            count_dict[num] += 1
        else:
            count_dict[num] = 1

        if count_dict[num] > max_count:
            max_count = count_dict[num]
            max_num = num

    if max_count == 3:
        reward = 10000 + max_num * 1000
    elif max_count == 2:
        reward = 1000 + max_num * 100
    else:
        reward = max(row) * 100
    rewards.append(reward)
    
max_reward = rewards[0]
i = 0
while i < len(rewards):
    if rewards[i] > max_reward:
        max_reward = rewards[i]
    i += 1
print(max_reward)