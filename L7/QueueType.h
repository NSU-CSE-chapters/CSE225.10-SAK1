//
// Created by f12r on ৩/৮/২১.
//

#ifndef L7_QUEUETYPE_H
#define L7_QUEUETYPE_H

class FullQueue {
};

class EmptyQueue {
};

template<class ItemType>

class QueueType {

private:
    int *qu;
    int size;
    int front;
    int rear;

public:
    QueueType();
    QueueType(int);
    void enqueue(ItemType);
    int dequeue();
    bool isFull();
    bool isEmpty();
    void display();
    int frontItem();
    int backItem();

    ~QueueType();
};


#endif //L7_QUEUETYPE_H
