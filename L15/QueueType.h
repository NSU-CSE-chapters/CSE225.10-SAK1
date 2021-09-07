//
// Created by f12r on ৭/৯/২১.
//

#ifndef L15_QUEUETYPE_H
#define L15_QUEUETYPE_H


class FullQueue
{};
class EmptyQueue
{};
template<class ItemType>
class QueType
{
public:
    QueType();
    QueType(int max);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
private:
    int front;
    int rear;
    ItemType* items;
    int maxQue;
};
#endif //L15_QUEUETYPE_H
