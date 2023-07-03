adj_list = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F', 'G'],
    'D': ['H', 'I'],
    'E': [],
    'F': ['J'],
    'G': [],
    'H': [],
    'I': []
}

#dfs algorithm 

def dfs(graph, start, visited=None):
    if visited is None:
        visited = set()
    visited.add(start)
    print(start)
    for next in graph[start] - visited:
        dfs(graph, next, visited)
    return visited

print("Dfs output: ")
rootNode = input("Enter the root node: ")
dfs(adj_list, rootNode)
