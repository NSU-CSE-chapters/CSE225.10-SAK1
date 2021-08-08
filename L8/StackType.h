//
// Created by f12r on ৮/৮/২১.
//

#ifndef L8_STACKTYPE_H
#define L8_STACKTYPE_H


class FullStack {
};

class EmptyStack {
};

template<class ItemType>
class StackType {
    struct NodeType {
        ItemType info;
        NodeType *next;
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
    NodeType *topPtr;
};


#endif //L8_STACKTYPE_H
