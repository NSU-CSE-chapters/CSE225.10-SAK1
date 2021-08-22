//
// Created by f12r on ২২/৮/২১.
//

#ifndef L11_SORTEDTYPE_H
#define L11_SORTEDTYPE_H

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

    void RetrieveItem(ItemType &,
                      bool &);

    void InsertItem(ItemType);

    void DeleteItem(ItemType);

    void ResetList();

    void GetNextItem(ItemType &);

private:
    NodeType *listData;
    int length;
    NodeType *currentPos;
    int hour;
    int minute;
    int second;
};

class timeStamp : SortedType<int>
{
public:
    timeStamp(int, int, int);

    timeStamp();

    void setTimeStamp(int, int, int);

    void PrintTimeStamp();

    int getMinute();

    int getSecond();

    int getHour();

private:
    int second;
    int minute;
    int hour;
};

#endif //L11_SORTEDTYPE_H
