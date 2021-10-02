//
// Created by f12r on ৯/৯/২১.
//

#ifndef TASK_3_SORTEDTYPE_H
#define TASK_3_SORTEDTYPE_H


template <class ItemType>
class SortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    SortedType();
    ~SortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType&,
                      bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);
    int countNode();
    void deleteMiddle();

private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};


#endif //TASK_3_SORTEDTYPE_H
