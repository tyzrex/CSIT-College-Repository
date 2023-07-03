graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F', 'G'],
    'D': [],
    'E': [],
    'F': [],
    'G': []
}

def iddfs(start, goal, max_depth):
    for depth in range(max_depth+1):
        visited = set()
        path = []
        if dfs(start, goal, visited, path, depth):
            print("Depth Limit: {} Traversed path: {}".format(depth, " -> ".join(path)))
            return path
        else:
            print("Depth Limit: {} Traversed path: {}".format(depth, " -> ".join(path)))
    return None

def dfs(node, goal, visited, path, depth):
    visited.add(node)
    path.append(node)
    if node == goal:
        return True
    if depth == 0:
        return False
    for neighbor in graph[node]:
        if neighbor not in visited:
            if dfs(neighbor, goal, visited, path, depth-1):
                return True
    path.pop()  # remove the last node from the path before returning False
    return False


start = input("Enter the start node: ")
goal = input("Enter the goal node: ")
max_depth = int(input("Depth Limit: "))

path = iddfs(start, goal, max_depth)

if path:
    print("Goal node found! Traversed path:", " -> ".join(path))
else:
    print("Goal node not found within depth limit.")
