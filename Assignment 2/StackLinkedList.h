//
// Created by f12r on ১৫/৮/২১.
//

#ifndef ASSIGNMENT_2_STACKLINKEDLIST_H
#define ASSIGNMENT_2_STACKLINKEDLIST_H

class FullStack {

};

class EmptyStack {

};

template<class T>
class StackLinkedList {

    struct NodeType {
        T data;
        NodeType *link;
    };
private:

    NodeType *topPtr;
public:
    StackLinkedList();
   ~StackLinkedList();
    void push(T);

    void pop(T &);

    bool isEmpty();

    T top();

    void PrintStack();

};


#endif //ASSIGNMENT_2_STACKLINKEDLIST_H
