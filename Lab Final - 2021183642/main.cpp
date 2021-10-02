#include "BinaryTree.h"
#include "BinaryTree.cpp"
#include <iostream>

using namespace std;

bool isBST(Node<int> *root);

int main() {

    //input root
    int root;
    cout << "Enter root: ";
    cin >> root;


    TreeType<int> tree(root);

    // total child node
    int totalChildNode;
    cout << "Enter total number of child node: ";
    cin >> totalChildNode;


    cout << "Enter items: (root->direction->child)" << endl;
    // child node
    for (int i = 0; i < totalChildNode; i++) {
        int root, child;
        string dir;
        cin >> root >> dir >> child;
        if (dir == "LEFT" || dir == "Left" || dir == "left")
            tree.InsertItem(root, LEFT, child);
        else
            tree.InsertItem(root, RIGHT, child);
    }

    // check if bst or not
    if (isBST(tree.root))
        cout << "The given binary tree is BST" << endl;
    else
        cout << "The given binary tree is Not BST" << endl;
    return 0;
}


// check bst function
bool isBST(Node<int> *root) {
    if (root == NULL)
        return true;
    else {
        if (LeftBST(root->left, root->data))
            return RightBST(root->right);
    }
}
