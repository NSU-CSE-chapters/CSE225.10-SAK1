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

    // for (int i = 0; i < 5; ++i) {
    //     int s, m, h;
    //     cin >> s >> m >> h;
    //     timeStamp ts(s, m, h);
    //     ts.print();
    // }

    //     cout << "insert 5 time: " << endl;

    //     for (int i = 0; i < 5; i++)
    //     {
    //         int s, m, h;
    //         cin >> s >> m >> h;

    //         ts[i].setTimeStamp(s, m, h);
    //     }

    //     cout << endl;
    //     cout << "display: " << endl;

    //     for (int i = 0; i < 5; i++)
    //     {
    //         ts[i].print();
    //     }

    timeStamp ts[5];

    cout << "insert 5 time :" << endl;

    for (int i = 0; i < 5; i++)
    {
        int ss, mm, hh;
        cin >> ss >> mm >> hh;
        ts[i].setTimeStamp(ss, mm, hh);
    }
    for (int i = 0; i < 5; i++)
    {
        ts[i].PrintTimeStamp();
    }
    int s, m, h;
    cout << "delete time:" << endl;
    cin >> s >> m >> h;
    timeStamp t(s, m, h);

    for (int i = 0; i < 5; i++)
    {
        if (ts[i].getSecond() == t.getSecond() && ts[i].getMinute() == t.getMinute() && ts[i].getHour() == t.getHour())
        {
            ts[i] = ts[4];
            break;
        }
    }

    cout<<"after delete: "<<endl;

    for (int i = 0; i < 4; i++)
    {
        ts[i].PrintTimeStamp();
    }
    return 0;
}
 