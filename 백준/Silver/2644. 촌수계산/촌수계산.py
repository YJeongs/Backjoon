from collections import deque
degree = int(input())
p1, p2 = map(int, input().split())

n = int(input())
visited= [False] * (degree+1)

relations = [[] for _ in range(degree+1)] 
for i in range(n):
    a, b = list(map(int, input().split()))
    relations[a].append(b)
    relations[b].append(a)

def bfs(relations, start, target, visited):
    queue = deque([(start, 0)])  # (노드, 촌수)
    visited[start] = True

    while queue:
        node, distance = queue.popleft()

        if node == target:
            return distance
        
        for neighbor in relations[node]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append((neighbor, distance + 1))

    return -1  # 관계가 없는 경우

print(bfs(relations, p1, p2, visited))