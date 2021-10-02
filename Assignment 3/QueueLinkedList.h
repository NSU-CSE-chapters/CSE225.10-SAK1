//
// Created by f12r on ১৫/৮/২১.
//

#ifndef ASSIGNMENT_3_QUEUELINKEDLIST_H
#define ASSIGNMENT_3_QUEUELINKEDLIST_H

class EmptyQueue {

};

class FullQueue {

};
template<class T>
class QueueLinkedList {

    struct NodeType{
        T data;
        NodeType *link;
    };


private:
    NodeType *front;
    NodeType *rear;

public:
    QueueLinkedList();
    ~QueueLinkedList();
    bool  isEmpty();

    void enQueue(T );
    void DeQueue(T &);
    void PrintQueue();

};


#endif //ASSIGNMENT_3_QUEUELINKEDLIST_H
