//
// Created by f12r on ১৭/৮/২১.
//

#ifndef L10_UNSORTEDTYPE_H
#define L10_UNSORTEDTYPE_H


template<class ItemType>
class UnsortedType {
    struct NodeType {
        ItemType info;
        NodeType *next;
    };
public:
    UnsortedType();

    ~UnsortedType();

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
};


#endif //L10_UNSORTEDTYPE_H
