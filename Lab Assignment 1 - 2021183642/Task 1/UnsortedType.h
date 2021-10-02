//
// Created by f12r on ১৭/৮/২১.
//

#ifndef TASK_1_UNSORTEDTYPE_H
#define TASK_1_UNSORTEDTYPE_H


template<class ItemType>
class UnsortedType {
public :
    UnsortedType();

    UnsortedType(int);

    void MakeEmpty();

    bool IsFull();

    int LengthIs();

    void InsertItem(ItemType);

    void DeleteItem(ItemType);

    void RetrieveItem(ItemType &, bool &, int&);

    void ResetList();

    void GetNextItem(ItemType &);

private:
    int length;
    int size;
    ItemType *info;
    int currentPos;
};


#endif //TASK_1_UNSORTEDTYPE_H
