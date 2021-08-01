//
// Created by f12r on ২৫/৭/২১.
//

#ifndef L5_SORTEDTYPE_H
#define L5_SORTEDTYPE_H
const int MAX_ITEMS = 5;

template<class T>
class SortedType {
private:
    int length;
    T info[MAX_ITEMS];
    int currentPos;
public:
    SortedType();

    void MakeEmpty();
    void display();

    bool IsFull();

    int LengthIs();

    void InsertItem(T);

    void DeleteItem(T);

    void RetrieveItem(T );

    void ResetList();

    void GetNextItem(T &);

};

class timeStamp
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

#endif //L5_SORTEDTYPE_H
