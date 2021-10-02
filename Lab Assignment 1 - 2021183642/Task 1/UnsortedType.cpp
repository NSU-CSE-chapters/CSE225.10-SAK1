//
// Created by f12r on ১৭/৮/২১.
//

#include "UnsortedType.h"

template<class ItemType>
UnsortedType<ItemType>::UnsortedType() {
    length = 0;
    size = 0;
    currentPos = -1;
    info = new ItemType[size];

}

template<class ItemType>
UnsortedType<ItemType>::UnsortedType(int size) {
    length = 0;
    currentPos = -1;
    this->size = size;
    info = new ItemType[size];
}

template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty() {
    length = 0;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull() {
    return (length == size - 1);
}

template<class ItemType>
int UnsortedType<ItemType>::LengthIs() {
    return length;
}

template<class ItemType>
void UnsortedType<ItemType>::ResetList() {
    currentPos = -1;
}

template<class ItemType>
void
UnsortedType<ItemType>::GetNextItem(ItemType &item) {
    currentPos++;
    item = info[currentPos];
}

template<class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType &item, bool &found, int &loc) {
    int location = 0;
    bool moreToSearch = (location < length);
    found = false;
    while (moreToSearch && !found) {
        if (item == info[location]) {
            found = true;
            item = info[location];
            loc = location;
        } else {
            location++;
            moreToSearch = (location < length);
        }
    }
}


template<class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item) {
    info[length] = item;
    length++;
}

template<class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item) {
    int location = 0;
    while (item != info[location])
        location++;
    info[location] = info[length - 1];
    length--;
}