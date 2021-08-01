//
// Created by f12r on ১/৮/২১.
//
#include <iostream>

using namespace std;

#include "StackType.h"


template<class T>
StackType<T>::StackType() {
    top = -1;
    size = 0;
    items = new T[size];
}

template<class T>
StackType<T>::StackType(T size) {
    this->size = size;
    top = -1;
    items = new T[size];

}


template<class T>
bool StackType<T>::isFull() {

    return top == size - 1;
}


template<class T>
bool StackType<T>::isEmpty() {
    return top == -1;
}


template<class T>
void StackType<T>::push(T item) {

    if (isFull()) {
        cout << "list is full" << endl;
        return;
    }

    top++;
    items[top] = item;

}

template<class T>
void StackType<T>::pop() {
    if (isEmpty()) {
        cout << "list is empty" << endl;
        return;
    }

    top--;
}

template<class T>
T StackType<T>::topItem() {
    return items[top];
}

template<class T>
void StackType<T>::displayStack()
{

    for (int i = 0; i <= top; i++)
    {
        cout << items[i] << " ";
    }

    cout << endl;
}

template<class T>
StackType<T>::~StackType() {
    delete[] items;

}

