//
// Created by f12r on ১১/৭/২১.
//

#ifndef L4_UNSORTEDTYPE_H
#define L4_UNSORTEDTYPE_H

const int MAX_ITEMS = 5;

template<class T>
class UnsortedType {
private:
    int length;
    T info[MAX_ITEMS];
    int currentPos;

public:
    UnsortedType();

    void MakeEmpty();

    bool IsFull();

    int LengthIs();

    void InsertItem(T);

    void DeleteItem(T);

    void RetrieveItem(T);

    void ResetList();

    void GetNextItem();


};


#endif //L4_UNSORTEDTYPE_H
