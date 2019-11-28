//
// Created by Ali Akkaya on 19.11.2019.
//

#include "DisjointSet.h"

DisjointSet::DisjointSet(int n){
    // Allocate memory
    this->n = n;
    parent = new int[n+1];
    size = new int[n+1];

    // Initially, all vertices are in
    // different sets and have size 0.
    for (int i = 0; i <= n; i++) {
        size[i] = 0;
        //every element is parent of itself
        parent[i] = i;
    }
}

DisjointSet::~DisjointSet(){
    delete[] parent;
    delete[] size;
}

// Find the parent of a node 'u'
// Path Compression
int DisjointSet::find(int u) {
    // Make the parent of the nodes in the path
    // from u--> parent[u] point to parent[u]
    if (u != parent[u])
        parent[u] = find(parent[u]);
    return parent[u];
}

// Union by size
void DisjointSet::dsunion(int x, int y)
{
    x = find(x), y = find(y);

    // Make tree with smaller height
    // a subtree of the other tree
    if (size[x] > size[y])
        parent[y] = x;
    else // If size[x] <= size[y]
        parent[x] = y;

    if (size[x] == size[y])
        size[y]++;
}
