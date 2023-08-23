compNum = int(input())
conCompNum = int(input())

visited = [False] * (compNum + 1)
computers = [[] for _ in range(compNum+1)] 

for _ in range(conCompNum):
    a, b = map(int, input().split())
    computers[a].append(b)
    computers[b].append(a)

virus = 0

def dfs(computers, node, visited):
    global virus
    visited[node] = True
    virus += 1

    for computer in computers[node]:
        if not visited[computer]:
            dfs(computers, computer, visited)

dfs(computers, 1, visited)

print(virus-1)