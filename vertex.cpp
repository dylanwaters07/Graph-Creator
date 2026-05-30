// Add Vertex: Enter a label for a vertex. Add it to the graph. (5 points).
// Remove Vertex: Enter a vertex label and remove it from the graph. Remove all edges to that vertex.  (5 points).

#include <iostream>
#include "vertex.h"
using namespace std;

vertex::vertex(){
  label = "";
}

vertex::~vertex(){
  // Destructor
}

string& vertex::getLabel(){
  return label;
}

void vertex::setLabel(string label){
  this->label = label;
}