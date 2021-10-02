//
// Created by f12r on ১২/৯/২১.
//

#include "BinaryTree.h"
#include <iostream>
using namespace std;
template<class ItemType>
TreeType<ItemType>::TreeType(ItemType item)
{
    root = new Node<ItemType>;
    root->right = NULL;
    root->left = NULL;
    root->data = item;
}
template <class ItemType>
void Destroy(Node<ItemType>*& tree)
{
    if (tree != NULL)
    {
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
        tree = NULL;
    }
}
template <class ItemType>
TreeType<ItemType>::~TreeType()
{
    Destroy(root);
}
template <class ItemType>
void TreeType<ItemType>::MakeEmpty()
{
    Destroy(root);
}

template <class ItemType>
bool TreeType<ItemType>::IsEmpty()
{
    return root == NULL;
}

template <class ItemType>
int CountNodes(Node<ItemType>* tree)
{
    if (tree == NULL)
        return 0;
    else
        return CountNodes(tree->left) +
               CountNodes(tree->right) + 1;
}
template <class ItemType>
int TreeType<ItemType>::LengthIs()
{
    return CountNodes(root);
}

template <class ItemType>
void Retrieve(Node<ItemType>* tree, ItemType& item, bool& found, Node<ItemType>*& node)
{
    if (tree == NULL)
        found = false;
    else if (item == tree->data)
    {
        item = tree->data;
        found = true;
        node = tree;
    }
    else
    {
        Retrieve(tree->left,item,found,node);
        if(!found)
            Retrieve(tree->right,item,found,node);
    }
}

template <class ItemType>
void TreeType<ItemType>:: InsertItem(ItemType item,DIRECTION d, ItemType child)
{
    bool found;
    Node<ItemType>* tree = NULL;
    Retrieve(root,item,found,tree);
    if(found)
    {
        switch (d)
        {
            case LEFT:
                tree->left = new Node<ItemType>;
                tree->left->right = NULL;
                tree->left->left = NULL;
                tree->left->data = child;
                break;
            case RIGHT:
                tree->right = new Node<ItemType>;
                tree->right->right = NULL;
                tree->right->left = NULL;
                tree->right->data = child;
                break;
        }

    }
    else
        cout<<"Root not found"<< endl;
}

bool LeftBST(Node<int> *root, int max) {
    if (root == NULL)
        return true;
    else if (root->left != NULL && root->right != NULL && (root->right->data >= max || root->left->data >= max))
        return false;
    else if (root->right != NULL && root->right->data < root->data)
        return false;
    else if (root->left != NULL && root->left->data > root->data)
        return false;
    else {
        if (LeftBST(root->left, max))
            return LeftBST(root->right, max);
    }
}

bool RightBST(Node<int> *root) {
    if (root == NULL)
        return true;
    else if (root->right != NULL && root->right->data < root->data)
        return false;
    else if (root->left != NULL && root->left->data > root->data)
        return false;
    else {
        if (LeftBST(root->left, root->data))
            return RightBST(root->right);
    }
}

