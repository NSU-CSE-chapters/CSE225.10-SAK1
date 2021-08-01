//
// Created by f12r on ১/৮/২১.
//

#ifndef L6_STACKTYPE_H
#define L6_STACKTYPE_H

template<class T>
class StackType {
private:
    int top;
    int size;
    T *items ;
public:
    StackType();
    StackType(T);
    bool  isFull();
    bool  isEmpty();
    void push(T );
    void pop();
    T topItem();
    void displayStack();
    ~StackType();


};


#endif //L6_STACKTYPE_H
