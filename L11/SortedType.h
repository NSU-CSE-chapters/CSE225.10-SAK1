//
// Created by f12r on ২২/৮/২১.
//

#ifndef L11_SORTEDTYPE_H
#define L11_SORTEDTYPE_H

#include <iostream>

template <class ItemType>
class SortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType *next;
    };

public:
    SortedType();
    ~SortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType &, bool &);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType &);

private:
    NodeType *listData;
    int length;
    NodeType *currentPos;
};

class timeStamp
{

    struct NodeType
    {
        int second;
        int minute;
        int hour;
        NodeType *next;
    };

public:
    timeStamp();
    int LengthIs();
    void MakeEmpty();
    void ResetList();
    void InsertItem(int, int, int);
    void DeleteItem(int, int, int);
    void GetNextItem(int &, int &, int &);
    void PrintTimes();
    ~timeStamp();

private:
    NodeType *listData;
    int length;
    NodeType *currentPos;
};

#endif //L11_SORTEDTYPE_H



