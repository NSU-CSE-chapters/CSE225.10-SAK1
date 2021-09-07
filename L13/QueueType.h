//
// Created by f12r on ৩১/৮/২১.
//

#ifndef L13_QUEUETYPE_H
#define L13_QUEUETYPE_H


class FullQueue
{};
class EmptyQueue
{};
template <class ItemType>
class QueType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
private:
    NodeType *front, *rear;
};

#endif //L13_QUEUETYPE_H
