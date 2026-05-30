// Add Edge: Enter two node names and a weight (positive integer). Add an edge between them, from the first node
// to the second node. (5 points).
// Remove Edge: Enter two vertex labels, and remove an edge between them.  (5 points).

#include <iostream>
#include "edge.h"
using namespace std;

edge::edge(vertex* v1, vertex* v2, int weight){
    vertex1 = v1;
    vertex2 = v2;
    this->weight = weight;
}

edge::~edge(){
    // Destructor
}

vertex* edge::getVertex1(){
    return vertex1;
}

vertex* edge::getVertex2(){
    return vertex2;
}

int edge::getWeight(){
    return weight;
}

vertex* edge::getOtherVertex(vertex* v){
    if(v == vertex1){
        return vertex2;
    } else if(v == vertex2){
        return vertex1;
    }
    return nullptr; // Return nullptr if the vertex is not part of this edge
}

void edge::printEdge(){
    cout << vertex1->getLabel() << " --(" << weight << ")--> " << vertex2->getLabel() << endl;
}