//
// Created by Ali Akkaya on 12.11.2019.
//

#ifndef BFS_GRAPH_H
#define BFS_GRAPH_H

#include<set>
#include<list>
#include<vector>
#include<iostream>

using namespace std;

// Creating a new type for an integer pair
typedef  pair<int, int> iPair;

class Graph {

private:
    int numberOfVertices;    // No. of vertices
    // Pointer to an array containing adjacency lists
    vector< pair<int, iPair> > edges;

public:
    Graph(int numberOfVertices);  // Constructor
    ~Graph();  // Destructor
    void addEdge(int u, int v, int w);
    int kruskalMST();
};

#endif //BFS_GRAPH_H
