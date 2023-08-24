from collections import deque

dx = [-1, 1, 0, 0]
dy = [0, 0, 1, -1]

count = 1
def bfs(x, y):
    queue = deque()
    queue.append((x,y))
    graph[x][y] = 0
    count = 1

    while queue:
        x, y = queue.popleft() #왼쪽 끝 데이터 제거 및 반환
        for i in range(4):
            move_dx = x + dx[i]
            move_dy = y + dy[i]
            if 0 <= move_dx < N and 0 <= move_dy < N: #범위 안 
                if graph[move_dx][move_dy] == 1: #이동가능
                    queue.append((move_dx, move_dy))
                    graph[move_dx][move_dy] = 0
                    count += 1

    return count


N = int(input())

graph = []
for i in range(N):
    row = list(map(int, input().strip()))
    graph.append(row)

cnt = []
for i in range(N):
    for j in range(N):
        if graph[i][j] == 1:
            cnt.append(bfs(i, j))

cnt.sort()
print(len(cnt))
for c in cnt:
    print(c)
