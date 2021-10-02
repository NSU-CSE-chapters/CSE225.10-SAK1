//
// Created by f12r on ১২/৯/২১.
//

#ifndef LAB_FINAL_BINARYTREE_H
#define LAB_FINAL_BINARYTREE_H
template <class ItemType>
struct Node
{
    ItemType data;
    Node* left;
    Node* right;
};
enum DIRECTION {LEFT, RIGHT};
template <class ItemType>
class TreeType
{
public:
    TreeType(ItemType itm);
    ~TreeType();
    bool IsEmpty();
    void MakeEmpty();
    int LengthIs();
    void InsertItem(ItemType, DIRECTION, ItemType);
    Node<ItemType>* root;
};

#endif //LAB_FINAL_BINARYTREE_H
