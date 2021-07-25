#include <iostream>
#include "SortedType.h"
#include "SortedType.cpp"

#include <bits/stdc++.h>
using namespace std;
int main()
{
    SortedType<int> sortedType;

    cout << sortedType.LengthIs() << endl;

    cout << "insert 5 items: ";

    for (int i = 0; i < 5; ++i)
    {
        int x;
        cin >> x;
        sortedType.InsertItem(x);
    }

    cout << "display: ";
    sortedType.display();

    cout << "retrieve item: ";
    int retrieveItem;
    cin >> retrieveItem;
    sortedType.RetrieveItem(retrieveItem);

    int retrieveItem2;
    cin >> retrieveItem2;
    sortedType.RetrieveItem(retrieveItem2);

    if (sortedType.IsFull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "List is not full" << endl;
    }

    cout << "delete an item: ";
    int delItem;
    cin >> delItem;

    sortedType.DeleteItem(delItem);

    cout << "display: ";
    sortedType.display();

    if (sortedType.IsFull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "List is not full" << endl;
    }

    for (int i = 0; i < 5; ++i)
    {
        int s, m, h;
        cin >> s >> m >> h;
        timeStamp ts(s, m, h);
        ts.print();
    }

    
    
    


    return 0;
}
