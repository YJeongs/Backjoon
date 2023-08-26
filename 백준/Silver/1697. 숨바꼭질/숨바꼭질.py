import sys
from collections import deque

N, K = map(int, sys.stdin.readline().split())


def bfs(N, K):
    visited = [False] * 100001
    queue = deque()
    queue.append((N,0))

    while queue:
        pos, time = queue.popleft()

        if pos == K:
            return time

        # 범위 내에 있는지 확인하고 큐에 추가
        if 0 <= pos - 1 <= 100000 and not visited[pos - 1]:
            queue.append((pos - 1, time + 1))
            visited[pos - 1] = True
        if 0 <= pos + 1 <= 100000 and not visited[pos + 1]:
            queue.append((pos + 1, time + 1))
            visited[pos + 1] = True
        if 0 <= 2 * pos <= 100000 and not visited[2 * pos]:
            queue.append((2 * pos, time + 1))
            visited[2 * pos] = True
        

min_time = bfs(N, K)
print(min_time)