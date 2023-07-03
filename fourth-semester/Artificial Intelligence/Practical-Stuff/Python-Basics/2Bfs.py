import queue

def breadthFirstSearch(visited,graph,node):
    q = queue.Queue()
    q.put(node)
    visited.add(node)
    while not q.empty():
        n = q.get()
        print(n)
        for neighbour in graph[n]:
            if neighbour not in visited:
                q.put(neighbour)
                visited.add(neighbour)
                
visited = set()

adjacency_list = {
    "A": ["B", "C"],
    "B": ["D"],
    "C": ["E", "F"],
    "D": [],
    "E": ["G"],
    "F": [],
    "G": []
}

start_node = "B"
breadthFirstSearch(visited,adjacency_list,start_node)

