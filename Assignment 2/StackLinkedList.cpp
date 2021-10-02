//
// Created by f12r on ১৫/৮/২১.
//

#include "StackLinkedList.h"
#include <iostream>

using namespace std;

template <class T>
StackLinkedList<T>::StackLinkedList()
{
    topPtr = NULL;
}

template <class T>
bool StackLinkedList<T>::isEmpty()
{
    return topPtr == NULL;
}

template <class T>
void StackLinkedList<T>::push(T item)
{
    NodeType *location = new NodeType;
    location->data = item;
    location->link = topPtr;
    topPtr = location;
}

template <class T>
void StackLinkedList<T>::pop(T &popItem)
{
    NodeType *temp;
    temp = topPtr;

    if (isEmpty())
    {
        throw EmptyStack();
    }
    else
    {
        NodeType *tempPtr;
        tempPtr = topPtr->next;
        topPtr->next = (topPtr->next)->link;
        delete tempPtr;
    }
}

template <class T>
T StackLinkedList<T>::top()
{
    if (isEmpty())
    {
        throw EmptyStack();
    }
    return topPtr->data;
}

template <class T>
void StackLinkedList<T>::PrintStack()
{
    NodeType *temp;
    temp = topPtr;

    if (topPtr == NULL)
    {
        throw EmptyStack();
    }
    else
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
}

template <class T>

StackLinkedList<T>::~StackLinkedList()
{
    NodeType *tempPtr;

    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->link;
        delete tempPtr;
    }
}