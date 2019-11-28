//
// Created by Ali Akkaya on 12.11.2019.
//

#include "Graph.h"
#include "DisjointSet.h"

Graph::Graph(int numberOfVertices) {
    this->numberOfVertices = numberOfVertices;
}

Graph::~Graph() {
}

void Graph::addEdge(int u, int v, int w) {
    edges.push_back({w, {u, v}});
}

// Function returns total weight of the MST

int Graph::kruskalMST() {
    int mst_wt = 0; // Initialize result

    // Sort edges in increasing order on basis of cost
    sort(edges.begin(), edges.end());

    // Create disjoint sets
    DisjointSet ds(this->numberOfVertices);

    // Iterate through all sorted edges
    vector< pair<int, iPair> >::iterator it;
    for (it=edges.begin(); it!=edges.end(); it++) {
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);

        // Check if the selected edge is creating
        // a cycle or not (Cycle is created if u
        // and v belong to same set)
        if (set_u != set_v) {
            // Current edge will be in the MST
            // so print it
            cout << u << " - " << v << endl;

            // Update MST weight
            mst_wt += it->first;

            // Union of two sets
            ds.dsunion(set_u, set_v);
        }
    }

    return mst_wt;
}