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

class timeStamp{
public:
    timeStamp();
    timeStamp(int ,  int, int);
    void print();
private:
    int seconds;
    int minutes;
    int hours;
};

#endif //L5_SORTEDTYPE_H
