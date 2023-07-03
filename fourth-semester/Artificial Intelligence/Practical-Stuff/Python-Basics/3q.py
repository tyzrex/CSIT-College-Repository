adjacency_list = {
    "A": ["B", "C"],
    "B": ["D"],
    "C": ["E", "F"],
    "D": [],
    "E": ["G"],
    "F": [],
    "G": []
}

class breadthFirstSearch:
    def __init__(self, adjacency_list):
        self.adjacency_list = adjacency_list
        self.visited = set()
        self.queue = []
        
    def search(self, start_node):
        self.queue.append(start_node)
        self.visited.add(start_node)
        while self.queue:
            n = self.queue.pop(0)
            print(n)
            for neighbour in self.adjacency_list[n]:
                if neighbour not in self.visited:
                    self.queue.append(neighbour)
                    self.visited.add(neighbour)