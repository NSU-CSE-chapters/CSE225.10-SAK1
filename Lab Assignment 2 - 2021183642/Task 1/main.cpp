#include "SortedType.h"
#include "SortedType.cpp"
#include <iostream>
using namespace std;
int main() {
    SortedType<int> list;
    cout<<"Enter N: ";
    int n;
    cin >> n;


    // inset element
    cout<<"Inset N Nodes: ";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        list.InsertItem(x);
    }

//     display before remove duplicate
cout<<"Before removing duplicate: ";
    for (int i = 0; i < list.LengthIs(); ++i) {
        int item;
        list.GetNextItem(item);
        cout << item << " ";
    }

    cout<<endl;
    // remove duplicate
    list.ResetList();
    int preNode;
    list.GetNextItem(preNode);
    for (int i = 0; i < list.LengthIs() - 1; ++i) {
        int x;
        list.GetNextItem(x);

        if (x == preNode) {
            list.DeleteItem(x);

        }
        preNode = x;

    }

    list.ResetList();
    // display after remove duplicate
    cout<<"After removing duplicates: ";
    for (int i = 0; i < list.LengthIs(); ++i) {
        int item;
        list.GetNextItem(item);
        cout << item << " ";
    }


    cout << endl;
    return 0;
}
