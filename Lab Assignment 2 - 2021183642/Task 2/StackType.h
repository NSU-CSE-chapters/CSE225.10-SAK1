//
// Created by f12r on ৯/৯/২১.
//

#ifndef TASK_2_STACKTYPE_H
#define TASK_2_STACKTYPE_H


class FullStack
{};
class EmptyStack
{};
template <class ItemType>
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
private:
    NodeType* topPtr;
};

#endif //TASK_2_STACKTYPE_H
