from collections import defaultdict

class Graph:
    def __init__(self):
        self.adj = defaultdict(list)

    def addEdge(self, v, w):
        self.adj[v].append(w)

    def DLS(self, v, goal, limit):
        if v == goal:
            return True
        if limit <= 0:
            return False
        for i in self.adj[v]:
            if self.DLS(i, goal, limit-1):
                return True
        return False

    def IDDFS(self, src, goal, limit):
        for i in range(limit+1):
            print("Iteration {}: {}".format(i, src), end=" ")
            if self.DLS(src, goal, i):
                return True
            print("\n")
        return False

if __name__ == "__main__":
    gp = Graph()
    gp.addEdge(0, 1)
    gp.addEdge(0, 2)
    gp.addEdge(1, 3)
    gp.addEdge(1, 4)
    gp.addEdge(2, 5)
    gp.addEdge(2, 6)
    gp.addEdge(3, 7)
    gp.addEdge(5, 8)
    gp.addEdge(6, 9)

    src, goal, limit = 0, 9, 3

    if gp.IDDFS(src, goal, limit):
        print("\nGoal node found within depth limit")
    else:
        print("Goal node not found!")
