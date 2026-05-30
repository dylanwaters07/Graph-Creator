// Find Shortest Path: Enter two vertex labels. Starting at the first label, use Dijkstra's algorithm 
// to find a path between the first vertex and the last vertex. Return the shortest path (and total) 
// if it exists, or return that no path exists.  (5 points).

#include <iostream>
#include "graph.h"
using namespace std;

graph::graph(){
    // Constructor
}

graph::~graph(){
    // Destructor
}

void graph::addVertex(string label){
    if(vertices.find(label) != vertices.end()){
        cout << "Vertex with label " << label << " already exists." << endl;
        return;
    }
    vertex* newVertex = new vertex();
    newVertex->setLabel(label);
    vertices[label] = newVertex;
}

void graph::removeVertex(string label){
    auto it = vertices.find(label);
    if(it == vertices.end()){
        cout << "Vertex with label " << label << " does not exist." << endl;
        return;
    }
    vertex* v = it->second;

    // Remove all edges connected to this vertex
    // TODO: Implement edge removal for all edges connected to this vertex

    vertices.erase(it); // Remove the vertex from the vertices map
    delete v; // Free memory
}

void graph::addEdge(string label1, string label2, int weight){
    auto it1 = vertices.find(label1);
    auto it2 = vertices.find(label2);
    if(it1 == vertices.end() || it2 == vertices.end()){
        cout << "One or both vertices do not exist." << endl;
        return;
    }
    vertex* v1 = it1->second;
    vertex* v2 = it2->second;

    edge* newEdge = new edge(v1, v2, weight);
    edges.push_back(newEdge);
}

void graph::removeEdge(string label1, string label2){
    auto it1 = vertices.find(label1);
    auto it2 = vertices.find(label2);
    if(it1 == vertices.end() || it2 == vertices.end()){
        cout << "One or both vertices do not exist." << endl;
        return;
    }
    vertex* v1 = it1->second;
    vertex* v2 = it2->second;
}

void graph::printGraph(){
    for(edge* e : edges){
        e->printEdge();
    }
}
