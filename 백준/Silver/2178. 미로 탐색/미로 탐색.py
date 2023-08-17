import sys
from collections import deque

n, m = map(int, input().split())

matrix = []
for i in range(n):
    row = list(map(int, input()))
    matrix.append(row)
    #matrix.append(list(map(int, sys.stdin.readline().strip())))


dx = [-1, 1, 0, 0]
dy = [0, 0, 1, -1]

def bfs(x,y):
    queue = deque() #빈 deque 생성
    queue.append((x,y)) #오른쪽 끝에 데이터 추가
    while queue:
        x, y = queue.popleft() #왼쪽 끝 데이터 제거 및 반환
        for i in range(4):
            move_dx = x + dx[i]
            move_dy = y + dy[i]
            if 0 <= move_dx < n and 0 <= move_dy < m: #범위 안 
                if matrix[move_dx][move_dy] == 1: #이동가능
                    queue.append((move_dx, move_dy))
                    matrix[move_dx][move_dy] = matrix[x][y] + 1 #원래 자리에서 한 번 움직였으니까 +1
            
bfs(0,0)
print(matrix[n-1][m-1])

