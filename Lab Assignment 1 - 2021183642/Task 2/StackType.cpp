#include "StackType.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <class T>
StackType<T>::StackType(int size)
{
    top = -1;
    this->size = size;
    list = new T[size];
}
template <class T>

StackType<T>::StackType()
{
    top = -1;
    size = 0;
    list = new T[size];
}
template <class T>

bool StackType<T>::isEmpty()
{
    return top == -1;
}
template <class T>

bool StackType<T>::isFull()
{
    return top == size - 1;
}
template <class T>

void StackType<T>::push(T item)
{
    if (isFull())
    {
        cout << "list is full" << endl;
        return;
    }
    top++;
    list[top] = item;
}
template <class T>

T StackType<T>::pop(T &item)
{
    if (isEmpty())
    {
        cout << "list is empty" << endl;
        return 0;
    }
    item = list[top];
    top--;

    return item;
}
template <class T>

T StackType<T>::topItem()
{
    return list[top];
}