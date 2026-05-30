#include <iostream>
#include "vertex.h"
using namespace std;

#ifndef EDGE_h
#define EDGE_h

class edge{
  public:
    edge(vertex* v1, vertex* v2, int weight);
    ~edge();

    vertex* getVertex1();
    vertex* getVertex2();
    int getWeight();

    vertex* getOtherVertex(vertex* v);

    void printEdge();

  private:
    vertex* vertex1;
    vertex* vertex2;
    int weight;
};

#endif