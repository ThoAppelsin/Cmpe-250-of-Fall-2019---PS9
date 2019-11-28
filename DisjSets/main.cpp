#include <iostream>
#include "DisjSets.h"

using namespace std;

int main() {
    DisjSets disjSet{10};
    cout << disjSet.find(4) << endl;
    cout << disjSet.find(2) << endl;
    disjSet.unionSets(4, 2);
    cout << disjSet.find(4) << endl;
    cout << disjSet.find(2) << endl;
    disjSet.unionSets(4, 3);
    cout << disjSet.find(3) << endl;
    return 0;
}