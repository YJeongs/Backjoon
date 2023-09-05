from collections import deque

M, N, H = map(int, input().split())

graph = [[list(map(int, input().split())) for _ in range(N)] for _ in range(H)]

dx = [-1, 1, 0, 0, 0, 0]
dy = [0, 0, -1, 1, 0, 0]
dz = [0, 0, 0, 0, -1, 1]

queue = deque()

def bfs():
    while queue:
        z, x, y= queue.popleft()
        for i in range(6):
            nx = x + dx[i]
            ny = y + dy[i]
            nz = z + dz[i]
            if 0 <= nx < N and 0 <= ny < M and 0 <= nz < H:
                if graph[nz][nx][ny] == 0:
                    graph[nz][nx][ny] = graph[z][x][y] + 1
                    queue.append((nz, nx, ny))



#토마토 있는 곳 찾아서 bfs 시작
for i in range(H):
    for j in range(N):
        for k in range(M):
            if graph[i][j][k] == 1:
                queue.append((i, j, k))

bfs()
flag = False
maxDay = 0

for i in range(H):
    for j in range(N):
        for k in range(M):
            if graph[i][j][k] == 0:
                flag = True
                break
            maxDay = max(maxDay, graph[i][j][k])

if flag:
    print(-1)
else:
    print(maxDay-1)

