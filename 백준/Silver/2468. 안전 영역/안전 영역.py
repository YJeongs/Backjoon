from collections import deque

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(x, y, height, visited):
    queue = deque()
    queue.append((x, y))
    visited[x][y] = True

    while queue:
        curX, curY = queue.popleft()

        for d in range(4):
            nx = curX + dx[d]
            ny = curY + dy[d]
            if 0 <= nx < n and 0 <= ny < n:
                if not visited[nx][ny] and graph[nx][ny] > height:
                    queue.append((nx, ny))
                    visited[nx][ny] = True

n = int(input())

graph = []
maxHeight = 0
for i in range(n):
    row = list(map(int, input().split()))
    graph.append(row)
    for j in range(n):
        if graph[i][j] > maxHeight:
            maxHeight = graph[i][j]

result = 0
for height in range(maxHeight):
    visited = [[False] * n for _ in range(n)]  # visited 배열 초기화
    safe_count = 0

    for i in range(n):
        for j in range(n):
            if not visited[i][j] and graph[i][j] > height:
                bfs(i, j, height, visited)
                safe_count += 1

    result = max(result, safe_count)

print(result)