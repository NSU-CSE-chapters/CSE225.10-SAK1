//
// Created by f12r on ১০/৮/২১.
//

#ifndef L9_QUETYPE_H
#define L9_QUETYPE_H


class FullQueue {
};

class EmptyQueue {
};

template<class ItemType>
class QueType {
    struct NodeType {
        ItemType info;
        NodeType *next;
    };
public:
    QueType();

    ~QueType();

    void MakeEmpty();

    void Enqueue(ItemType);

    void Dequeue(ItemType &);

    bool IsEmpty();

    bool IsFull();

    ItemType top();


private:
    NodeType *front, *rear;
};


#endif //L9_QUETYPE_H
