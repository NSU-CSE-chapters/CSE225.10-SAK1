// //
// // Created by f12r on ২২/৮/২১.
// //

#include "SortedType.h"
#include <iostream>

using namespace std;

template <class ItemType>
SortedType<ItemType>::SortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}
template <class ItemType>
int SortedType<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType>
bool SortedType<ItemType>::IsFull()
{
    NodeType *location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (bad_alloc &exception)
    {
        return true;
    }
}
template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item)
{
    NodeType *newNode;
    NodeType *predLoc;
    NodeType *location;
    bool moreToSearch;
    location = listData;
    predLoc = NULL;
    moreToSearch = (location != NULL);
    while (moreToSearch)
    {
        if (location->info < item)
        {
            predLoc = location;
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else
            moreToSearch = false;
    }
    newNode = new NodeType;
    newNode->info = item;
    if (predLoc == NULL)
    {
        newNode->next = listData;
        listData = newNode;
    }
    else
    {
        newNode->next = location;
        predLoc->next = newNode;
    }
    length++;
}
template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType *location = listData;
    NodeType *tempLocation;
    if (item == listData->info)
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while (!(item == (location->next)->info))
            location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType &item, bool &found)
{
    NodeType *location = listData;
    bool moreToSearch = (location != NULL);
    found = false;
    while (moreToSearch && !found)
    {
        if (item == location->info)
            found = true;
        else if (item > location->info)
        {
            location = location->next;
            moreToSearch = (location !=
                            NULL);
        }
        else
            moreToSearch = false;
    }
}
template <class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    NodeType *tempPtr;
    while (listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template <class ItemType>
SortedType<ItemType>::~SortedType()
{
    MakeEmpty();
}
template <class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos = NULL;
}
template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType &item)
{
    if (currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}

timeStamp::timeStamp()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}
void timeStamp::InsertItem(int s, int m, int h)
{
    NodeType *newNode;
    NodeType *predLoc;
    NodeType *location;
    bool moreToSearch;
    location = listData;
    predLoc = NULL;
    moreToSearch = (location != NULL);
    while (moreToSearch)
    {
        if (location->hour < h)
        {
            predLoc = location;
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else
            moreToSearch = false;
    }
    newNode = new NodeType;
    newNode->hour = h;
    newNode->minute = m;
    newNode->second = s;
    if (predLoc == NULL)
    {
        newNode->next = listData;
        listData = newNode;
    }
    else
    {
        newNode->next = location;
        predLoc->next = newNode;
    }
    length++;
}

void timeStamp::DeleteItem(int s, int m, int h)
{
    NodeType *location = listData;
    NodeType *tempLocation;
    if (h == listData->hour && (m = listData->minute) && (s = listData->second))
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while (!(h == (location->next)->hour && m == (location->next)->minute && s == (location->next)->second))
            location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}
void timeStamp::GetNextItem(int &s, int &m, int &h)
{
    if (currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    h = currentPos->hour;
    m = currentPos->minute;
    s = currentPos->second;
}
int timeStamp::LengthIs()
{
    return length;
}
void timeStamp::MakeEmpty()
{
    NodeType *tempPtr;
    while (listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}
timeStamp::~timeStamp()
{
    MakeEmpty();
}
void timeStamp::ResetList()
{
    currentPos = NULL;
}
void timeStamp::PrintTimes()
{
    for (int i = 0; i < LengthIs(); i++)
    {
        int s, m, h;
        GetNextItem(s, m, h);
        cout << h << ":" << m << ":" << s << endl;
    }
}