#include "GraphType.h"
#include "GraphType.cpp"
#include "QueueType.h"
#include "QueueType.cpp"
#include "StackType.h"
#include "StackType.cpp"
#include <iostream>
using  namespace std;


int main() {
    GraphType<char> graph;

    for (int i = 0; i < 8; ++i) {
        char x;
        cin>>x;
        graph.AddEdge(x,x,1);
    }





    return 0;
}
