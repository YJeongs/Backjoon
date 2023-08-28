from collections import deque

F, S, G, U, D = map(int, input().split())
visited = [False] * (F + 1)

def bfs(S, G):
    queue = deque()
    queue.append((S,0))
    visited[S] = True

    while queue:
        S, count = queue.popleft()
        if S == G:
            return count
        
        if (S + U) <= F and not visited[S+U]:
            queue.append((S + U, count + 1))
            visited[S + U] = True
        
        if (S - D) >= 1 and not visited[S-D]:
            queue.append((S - D, count + 1))
            visited[S - D] = True
        
    return -1

min_count = bfs(S,G)
if min_count >= 0:
    print(min_count)
else:
    print("use the stairs")