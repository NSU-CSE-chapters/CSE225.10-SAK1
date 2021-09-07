#include "BinarySearchTree.h"
#include "BinarySearchTree.cpp"
//#include "QueueType.h"
//#include "QueueType.cpp"
#include <iostream>

using namespace std;

int main() {

    TreeType<int> tree;

    if (tree.IsEmpty()) {
        cout << "Tree is empty" << endl;
    } else {
        cout << "Tree is not empty" << endl;

    }

    cout << "insert 10 items: ";

    for (int i = 0; i < 10; ++i) {
        int x;
        cin >> x;
        tree.InsertItem(x);
    }

    if (tree.IsEmpty()) {
        cout << "Tree is empty" << endl;
    } else {
        cout << "Tree is not empty" << endl;

    }

    cout << "Length of the tree is: " << tree.LengthIs() << endl;

    cout << "retreive item: ";
    int x;
    cin >> x;
    bool b;
    tree.RetrieveItem(x, b);

    if (b) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;

    }


    cout << "retreive another item: ";
    int y;
    cin >> y;
    bool z;
    tree.RetrieveItem(y, z);

    if (z) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;

    }





//    // inorder print
//    cout << "Inorder: ";
//
//    tree.Print();
//    cout << endl;
//
//    //preorder
//    cout << "Preorder: ";
//    tree.PreOrder();
//    cout << endl;
//
//    // postorder
//    cout << "Postorder: ";
//
//    tree.PostOrder();
//    cout << endl;






    // 11 9 4 2 7 3 17 0 5 1

    for (int i = 0; i < 10; ++i) {
        int c;
        cin >> c;
        tree.InsertItem(x);
    }
    int p;
    bool  l;
    tree.GetNextItem(p,IN_ORDER,l);


    return 0;
}
