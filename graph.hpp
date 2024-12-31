#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <queue>

class Graph {
private:
    int numVertices;
    std::vector<std::vector<int>> adjList;

public:
    // Constructor to initialize the graph with a number of vertices
    Graph(int vertices) {
        numVertices = vertices;
        adjList.resize(vertices);
    }

    // Method to add an edge to the graph
    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src); // For undirected graph
    }

    // Iterative DFS function using a stack
    void DFS(int startVertex) {
        std::vector<bool> visited(numVertices, false);
        std::stack<int> stack;
        stack.push(startVertex);
        visited[startVertex] = true;

        std::cout << "DFS (iterative) starting from vertex " << startVertex << ": ";
        
        while (!stack.empty()) {
            int vertex = stack.top();
            stack.pop();
            std::cout << vertex << " ";

            for (auto it = adjList[vertex].rbegin(); it != adjList[vertex].rend(); ++it) {
                if (!visited[*it]) {
                    stack.push(*it);
                    visited[*it] = true;
                }
            }
        }
        std::cout << std::endl;
    }

    // BFS function using a queue
    void BFS(int startVertex) {
        std::vector<bool> visited(numVertices, false);
        std::queue<int> queue;
        queue.push(startVertex);
        visited[startVertex] = true;

        std::cout << "BFS starting from vertex " << startVertex << ": ";

        while (!queue.empty()) {
            int vertex = queue.front();
            queue.pop();
            std::cout << vertex << " ";

            for (int neighbor : adjList[vertex]) {
                if (!visited[neighbor]) {
                    queue.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        std::cout << std::endl;
    }

    // Display the graph as an adjacency list
    void display() {
        std::cout << "Graph structure:" << std::endl;
        for (int i = 0; i < numVertices; ++i) {
            std::cout << i << ": ";
            for (int j : adjList[i]) {
                std::cout << j << " ";
            }
            std::cout << std::endl;
        }
    }

    // Getter for the number of vertices in the graph
    int getNumVertices() const {
        return numVertices;
    }
};

#endif // GRAPH_HPP
