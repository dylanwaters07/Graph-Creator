/*
* Dylan Waters
* 5/29/26

  Vertex class header file. This class will be used to create vertices.
*/

#include <iostream>
using namespace std;

#ifndef VERTEX_h
#define VERTEX_h

class vertex{
  public:
    vertex();
    ~vertex();

    string& getLabel();
    void setLabel(string label);
  private:
    string label;
};

#endif