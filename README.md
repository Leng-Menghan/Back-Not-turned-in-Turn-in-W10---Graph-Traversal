# Graph Traversal using DFS and BFS

## Overview

In this assignment, we perform graph traversal using two algorithms: **Depth-First Search (DFS)** and **Breadth-First Search (BFS)**, on a graph represented with an adjacency list. The graph has the following vertices and edges:

- **Vertices**: {0, 1, 2, 3, 4}
- **Edges**: {(0, 1), (0, 4), (1, 2), (1, 3), (3, 4)}

Both DFS and BFS are implemented to explore the graph starting from a given vertex.

----------------------------------------------------------------------------------------------------------------------------------------
## DFS (Depth-First Search)

DFS is an algorithm for traversing or searching tree or graph data structures. It starts at the root node and explores as far as possible along each branch before backtracking.

### DFS Traversal Process:
1. Start at the root node (vertex 0).
2. Visit the adjacent vertices as far as possible along each branch.
3. Backtrack when no more unvisited vertices are available.

### DFS Traversal Results:
- **Starting from vertex 0**, the DFS traversal order is: **0 1 2 3 4**.

----------------------------------------------------------------------------------------------------------------------------------------
## BFS (Breadth-First Search)

BFS is another algorithm for traversing or searching tree or graph data structures. It starts at the root node and explores all neighboring nodes at the present depth before moving on to nodes at the next depth level.

### BFS Traversal Process:
1. Start at the root node (vertex 0).
2. Visit all the neighbors at the current level.
3. Move to the next level and repeat until all vertices are visited.

### BFS Traversal Results:
- **Starting from vertex 0**, the BFS traversal order is: **0 1 4 2 3**.

----------------------------------------------------------------------------------------------------------------------------------------
## Key Differences Between DFS and BFS
- **DFS**: Explores the graph deeply, visiting vertices along one path as far as possible before backtracking.
- **BFS**: Explores the graph level by level, visiting all neighbors of a vertex before moving to the next level.

