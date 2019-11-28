//
// Created by Ali Akkaya on 19.11.2019.
//

#ifndef KRUSKAL_DISJOINTSET_H
#define KRUSKAL_DISJOINTSET_H


class DisjointSet {

private:
    int *parent, *size;
    int n;

public:
    // Constructor.
    DisjointSet(int n);
    ~DisjointSet();
    int find(int u);
    void dsunion(int x, int y);

};


#endif //KRUSKAL_DISJOINTSET_H
