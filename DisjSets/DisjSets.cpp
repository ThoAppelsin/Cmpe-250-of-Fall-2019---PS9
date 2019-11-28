#include <iostream>
#include "DisjSets.h"
// Construct the disjoint sets object.
// numElements is the initial number of disjoint sets.
using namespace std;

DisjSets::DisjSets( int numElements ) : s( numElements, -1 ) {
}

// Union two disjoint sets.
// root1 is the root of set 1.
// root2 is the root of set 2.

void DisjSets::unionSets( int node1, int node2 ) {
	root1 = find(node1);
	root2 = find(node2);
	if( root1 != root2 ) return;

    if( s[ root2 ] < s[ root1 ] )  // root2 is deeper
        s[ root1 ] = root2;        // Make root2 new root
    else
    {
        if( s[ root1 ] == s[ root2 ] )
            --s[ root1 ];          // Update height if same
        s[ root2 ] = root1;        // Make root1 new root
    }
}

// Perform a find with path compression.
// Error checks omitted again for simplicity.
// Return the set containing x.

int DisjSets::find( int x ) {
    if( s[ x ] < 0 )
        return x;
    else
        return s[ x ] = find( s[ x ] );
}
