#include <iostream>
#include "vertex.h"
#include "edge.h"
using namespace std;

#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <fstream>
#include <list>
#include <map>

#ifndef GRAPH_h
#define GRAPH_h

// Graph class header file. This class will be used to create a graph, which will consist of vertices and edges.
class graph{
  public:
  
    graph();
    ~graph();

    void addVertex(string label);
    void removeVertex(string label);
    void addEdge(string label1, string label2, int weight);
    void removeEdge(string label1, string label2);
    void printGraph();

  private:
    list<edge*> edges;
    map<string, vertex*> vertices;
};

#endif