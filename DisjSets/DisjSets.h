#ifndef DISJSETS_DISJSETS_H
#define DISJSETS_DISJSETS_H

// DisjSets class
//
// CONSTRUCTION: with int representing initial number of sets
//
// ******************PUBLIC OPERATIONS*********************
// void union( root1, root2 ) --> Merge two sets
// int find( x )              --> Return set containing x
// ******************ERRORS********************************
// No error checking is performed

#include <vector>
using namespace std;

class DisjSets {

public:
    explicit DisjSets( int numElements );

    int find( int x );
    void unionSets( int root1, int root2 );

private:
    vector<int> s;
};

#endif //DISJSETS_DISJSETS_H
