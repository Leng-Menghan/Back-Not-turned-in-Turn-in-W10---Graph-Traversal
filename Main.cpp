#include <iostream>
#include "Graph.hpp"

int main() {
    // Create a graph with 5 vertices
    Graph g(5);
    
    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);

    // Display the graph structure
    g.display();

    // Perform DFS (iterative)
    g.DFS(0);

    // Perform BFS
    g.BFS(0);

    return 0;
}
