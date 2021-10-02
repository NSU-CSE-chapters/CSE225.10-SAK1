//
// Created by f12r on ১৫/৮/২১.
//

#include "QueueLinkedList.h"
#include <iostream>

using namespace std;

template <class T>
QueueLinkedList<T>::QueueLinkedList()
{
    front = NULL;
    rear = NULL;
}

template <class T>
bool QueueLinkedList<T>::isEmpty()
{
    return front == NULL;
}

template <class T>
void QueueLinkedList<T>::enQueue(T item)
{
    NodeType *newNode;

    newNode = new NodeType;
    newNode->data = item;
    newNode->link = NULL;
    if (rear == NULL)
    {
        front = newNode;
    }
    else
    {
        rear->link = newNode;
    }

    rear = newNode;
}

template <class T>
void QueueLinkedList<T>::DeQueue(T &deItem)
{
    if (isEmpty())
    {
        throw EmptyQueue();
    }

    NodeType *temp;

    temp = front;
    deItem = front->data;
    front = front->link;
    if (front == NULL)
    {
        rear = NULL;
    }
    delete temp;
}

template <class T>
void QueueLinkedList<T>::PrintQueue()
{
    if (isEmpty())
    {
        throw EmptyQueue();
    }
    NodeType *temp;

    temp = front;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

template <class T>
QueueLinkedList<T>::~QueueLinkedList<T>()
{
    NodeType *temp;

    while (front != NULL)
    {
        temp = front;
        front = front->link;
        delete temp;
    }

    rear = NULL;
}