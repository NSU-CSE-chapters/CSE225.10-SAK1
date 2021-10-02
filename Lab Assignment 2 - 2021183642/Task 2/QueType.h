//
// Created by f12r on ৯/৯/২১.
//

#ifndef TASK_2_QUETYPE_H
#define TASK_2_QUETYPE_H


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
    void display();
private:
    NodeType *front, *rear;
};

#endif //TASK_2_QUETYPE_H
