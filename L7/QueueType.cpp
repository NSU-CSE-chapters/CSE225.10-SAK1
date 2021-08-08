//
// Created by f12r on ৩/৮/২১.
//

#include "QueueType.h"
#include <iostream>

using namespace std;

template<class ItemType>
QueueType<ItemType>::QueueType(int size) {
    this->size = size;
    qu = new int[size];
    front = -1;
    rear = -1;
}

template<class ItemType>
QueueType<ItemType>::QueueType() {
    size = 7;
    qu = new int[7];
    front = -1;
    rear = -1;
}

template<class ItemType>
QueueType<ItemType>::~QueueType() {
    delete[] qu;
}

//template<class ItemType>
//void QueueType<ItemType>::MakeEmpty() {
//    front = maxQue - 1;
//    rear = maxQue - 1;
//}

template<class ItemType>
bool QueueType<ItemType>::isEmpty() {
    if (front == -1 && rear == -1) {
        return true;
    } else
        return false;
}

template<class ItemType>
bool QueueType<ItemType>::isFull() {
    if ((rear + 1) % size == front) {
        return true;
    } else
        return false;
}

template<class ItemType>
void QueueType<ItemType>::enqueue(ItemType newItem) {
    if (isFull()) {
        cout << "Queue Overflow" << endl;
    } else if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % size;
    }
    qu[rear] = newItem;
}

template<class ItemType>
int QueueType<ItemType>::dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % size;
    }
}

template<class ItemType>

int QueueType<ItemType>::frontItem() {
    return qu[front];
}

template<class ItemType>

int QueueType<ItemType>::backItem() {
    return qu[rear];
}

template<class ItemType>

void QueueType<ItemType>::display() {
    int count = (rear + size - front) % size + 1;

    for (int i = 0; i < count; i++) {
        int index = (front + i) % size;
        cout << qu[index] << " ";
    }

    cout << endl;


}