//
// Created by f12r on ২৫/৭/২১.
//

#include "SortedType.h"

#include <iostream>

using namespace std;

template<class T>
SortedType<T>::SortedType() {
    length = 0;
    currentPos = -1;

}

template<class T>
void SortedType<T>::MakeEmpty() {
    length = 0;

}

template<class T>
bool SortedType<T>::IsFull() {
    return length == MAX_ITEMS;
}

template<class T>
int SortedType<T>::LengthIs() {
    return length;
}

template<class T>

void SortedType<T>::ResetList() {
    currentPos = -1;
}

template<class T>
void SortedType<T>::GetNextItem(T &item) {
    currentPos++;
    item = info[currentPos];
}

template<class T>
void SortedType<T>::InsertItem(T item) {
    int location = 0;
    bool moreToSearch = (location < length);
    while (moreToSearch) {
        if (item > info[location]) {
            location++;
            moreToSearch = (location < length);
        } else if (item < info[location])
            moreToSearch = false;
    }
    for (int index = length; index > location;
         index--)
        info[index] = info[index - 1];
    info[location] = item;
    length++;
}

template<class T>
void SortedType<T>::DeleteItem(T
                               item) {
    int location = 0;
    while (item != info[location])
        location++;
    for (int index = location + 1; index < length;
         index++)
        info[index - 1] = info[index];
    length--;
}

template<class T>
void SortedType<T>::RetrieveItem(T item) {
    int count = 0;
    for (int i = 0; i < length; ++i) {
        if (info[i] == item) {
            count++;

        }
    }
        if (count > 0) {
            cout << "Item is found" << endl;

        } else if (count == 0) {
            cout << "Item is not found" << endl;

        }

    }



template<class T>
void SortedType<T>::display() {
    for (int i = 0; i < length; ++i) {
        cout << (info[i]) << " ";
    }

    cout << endl;
}
timeStamp::timeStamp(int ss, int mm, int hh)
{
    ss = second;
    mm = minute;
    hh = hour;

}


timeStamp::timeStamp()
{
   second=0;
   minute=0;
   hour=0;
}
void timeStamp::setTimeStamp(int ss, int mm, int hh)
{
    second = ss;
    minute = mm;
    hour = hh;
}
void timeStamp::PrintTimeStamp()
{
   cout<<second <<":"<< minute << ":"<<hour<< endl;
}
int timeStamp::getHour()
{
    return hour;
}
int timeStamp ::getMinute()
{
    return minute;
}
int timeStamp ::getSecond()
{
    return second;
}