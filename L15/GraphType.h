//
// Created by f12r on ৭/৯/২১.
//

#ifndef L15_GRAPHTYPE_H
#define L15_GRAPHTYPE_H
#include "QueueType.h"
#include "StackType.h"
template<class VertexType>
class GraphType
{
public:
    GraphType();
    GraphType(int maxV);
    ~GraphType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void AddVertex(VertexType);
    void AddEdge(VertexType,
                 VertexType, int);
    int WeightIs(VertexType,
                 VertexType);
    void GetToVertices(VertexType,
                       QueType<VertexType>&);
    void ClearMarks();
    void MarkVertex(VertexType);
    bool IsMarked(VertexType);
    void DepthFirstSearch(VertexType,
                          VertexType);
    void BreadthFirstSearch(VertexType,
                            VertexType);
private:
    int numVertices;
    int maxVertices;
    VertexType* vertices;
    int **edges;
    bool* marks;
};

#endif //L15_GRAPHTYPE_H
