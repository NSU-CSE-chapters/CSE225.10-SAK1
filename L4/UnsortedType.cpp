//
// Created by f12r on ১১/৭/২১.
//
#include <iostream>
#include "UnsortedType.h"

using namespace std;

template<class T>
UnsortedType<T>::UnsortedType() {
    length = 0;
    currentPos = -1;
}

template<class T>

void UnsortedType<T>::MakeEmpty() {
    length = 0;
}

template<class T>

bool UnsortedType<T>::IsFull() {
    return (length == MAX_ITEMS);
}

template<class T>

int UnsortedType<T>::LengthIs() {
    return length;
}

template<class T>

void UnsortedType<T>::ResetList() {
    currentPos = -1;
}

template<class T>

void UnsortedType<T>::GetNextItem() {
    for (int i = 0; i < length; ++i) {
        std::cout << info[i] << " ";
    }

    std::cout << std::endl;

}

template<class T>

void UnsortedType<T>::RetrieveItem(T item) {
    for (int i = 0; i < length; ++i) {
        if (info[i] == item) {
            cout << "Item is found" << endl;
            return ;
        } else {
            cout << "Item is not found" << endl;
            return;
        }
    }
}

template<class T>

void UnsortedType<T>::InsertItem(T item) {
    info[length] = item;
    length++;
}

template<class T>

void UnsortedType<T>::DeleteItem(T item) {
    int location = 0;
    while (item != info[location])
        location++;
    info[location] = info[length - 1];
    length--;
}

