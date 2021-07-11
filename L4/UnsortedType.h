//
// Created by f12r on ১১/৭/২১.
//

#ifndef L4_UNSORTEDTYPE_H
#define L4_UNSORTEDTYPE_H

const int MAX_ITEMS = 5;

class UnsortedType {
private:
    int length;
    int info[MAX_ITEMS];
    int currentPos;

public:
    UnsortedType();

    void MakeEmpty();

    bool IsFull();

    int LengthIs();

    void InsertItem(int );

    void DeleteItem(int);

    void RetrieveItem(int &, bool &);

    void ResetList();

    void GetNextItem(int &);


};


#endif //L4_UNSORTEDTYPE_H
