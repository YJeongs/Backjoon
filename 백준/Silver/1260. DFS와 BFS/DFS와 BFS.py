from collections import deque

#스택
def dfs(graph, node, visited):
    visited[node] = True
    print(node, end=" ")

    for neighbor in graph[node]:
        if not visited[neighbor]:
            dfs(graph, neighbor, visited)

#큐
def bfs(graph, start, visited):
    queue = deque([start])  # 탐색을 시작할 정점을 큐에 넣어줌
    visited[start] = True

    while queue:
        node = queue.popleft()  # 큐에서 정점을 꺼내옴
        print(node, end=' ')

        # 해당 정점과 연결된 정점들 중에서 방문하지 않은 정점을 큐에 추가하고 방문 처리
        for neighbor in graph[node]:
            if not visited[neighbor]:
                queue.append(neighbor)
                visited[neighbor] = True

n,m,v = map(int,input().split())
graph = [[] for _ in range(n+1)] 

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
    
for i in graph: #번호가 적은 숫자부터 방문
    i.sort()

visited = [False] * (n+1)
dfs(graph, v, visited)
print()
visited = [False] * (n+1)
bfs(graph, v, visited)