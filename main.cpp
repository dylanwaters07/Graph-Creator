#include <iostream>
using namespace std;

#include "graph.h"

//Create a program which can create graphs (we are using weighted edge, directed graphs), and it can search 
//for the shortest path in the graph using Dijkstra's Algorithm (this is a famous algorithm you can go look up).
//Use an adjacency table for the graph, which can be printed out. 

// Commands for graph
void commands(){
    cout << "COMMANDS: Enter the command number:" << endl;
    cout << "ADD_VERTEX    - 1" << endl;
    cout << "ADD_EDGE      - 2" << endl;
    cout << "REMOVE_VERTEX - 3" << endl;
    cout << "REMOVE_EDGE   - 4" << endl;
    cout << "SHORTEST_PATH - 5" << endl;
    cout << "PRINT_GRAPH   - 6" << endl;
    cout << "QUIT          - 7";
}

// Main function to run the graph program
// Still work needed to make graph creation working.
int main()
{
    graph g;
    int command;
    string label1, label2;
    int weight;
    commands();
    while(true){
        cout << "Enter command: ";
        cin >> command;
        switch(command){
            case 1:
                cout << "Enter vertex label: ";
                cin >> label1;
                g.addVertex(label1);
                break;
            case 2:
                cout << "Enter first vertex label: ";
                cin >> label1;
                cout << "Enter second vertex label: ";
                cin >> label2;
                cout << "Enter edge weight: ";
                cin >> weight;
                g.addEdge(label1, label2, weight);
                break;
            case 3:
                cout << "Enter vertex label: ";
                cin >> label1;
                g.removeVertex(label1);
                break;
            case 4:
                cout << "Enter first vertex label: ";
                cin >> label1;
                cout << "Enter second vertex label: ";
                cin >> label2;
                g.removeEdge(label1, label2);
                break;
            case 5:
                cout << "Enter start vertex label: ";
                cin >> label1;
                cout << "Enter end vertex label: ";
                cin >> label2;

                cout << "Shortest path not implemented yet." << endl;

                break;
            case 6:
                g.printGraph();
                break;
            case 7:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid command." << endl;
                break;
        }
    }
    return 0;
}