//
// Created by f12r on ১ ২ /৮/২ ১ .
//
#ifndef LAB_ASSIGNMENT_H
#define LAB_ASSIGNMENT_H
template <class T>

class StackType
{
private:
    int size;
    T *list;
    int top;

public:
    StackType();
    StackType(int);
    void push(T);
    T pop(T &);
    T topItem();
    bool isEmpty();
    bool isFull();
};
#endif //LAB_ASSIGNMENT_H