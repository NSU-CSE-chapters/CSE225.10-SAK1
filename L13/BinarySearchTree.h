//
// Created by f12r on ৩১/৮/২১.
//

#ifndef L13_BINARYSEARCHTREE_H
#define L13_BINARYSEARCHTREE_H
#include "QueueType.h"

template <class ItemType>
struct TreeNode
{
    ItemType info;
    TreeNode* left;
    TreeNode* right;
};
enum OrderType {PRE_ORDER, IN_ORDER,
    POST_ORDER};
template <class ItemType>
class TreeType
{
public:
    TreeType();
    ~TreeType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    int LengthIs();
    void RetrieveItem(ItemType& item,
                      bool& found);
    void InsertItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetTree(OrderType order);
    void GetNextItem(ItemType& item,
                     OrderType order, bool& finished);
    void Print();
    void PreOrder();
    void PostOrder();

private:
    TreeNode<ItemType>* root;
    QueType<ItemType> preQue;
    QueType<ItemType> inQue;
    QueType<ItemType> postQue;
};


#endif //L13_BINARYSEARCHTREE_H
