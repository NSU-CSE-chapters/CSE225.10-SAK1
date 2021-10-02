#include "SortedType.h"
#include "SortedType.cpp"
#include <iostream>
using namespace std;
int main()
{

    SortedType<int> list;
    cout << "Enter N: "; // number of nodes
    int n;
    cin >> n;

//      check the input  is NULL or has 1 node
    if (n == 0 || n == 1)
    {
        return NULL;
    }

    // insert nodes
    cout << "Insert Elements in the Linked List : ";
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        list.InsertItem(x);
    }

    // print the list
    cout << "Before deleting the middle of the linked list: " << endl;
    for (int i = 0; i < list.LengthIs(); ++i)
    {
        int item;
        list.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    list.deleteMiddle();
    // after deleting the middle of the linked list
    cout << "After deleting the middle of the linked list: " << endl;

    list.ResetList();

    for (int i = 0; i < list.LengthIs(); ++i)
    {
        int item;
        list.GetNextItem(item);
        cout << item << " ";
    }

    cout << endl;
    return 0;
}
