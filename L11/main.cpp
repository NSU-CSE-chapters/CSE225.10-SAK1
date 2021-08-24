#include "SortedType.h"
#include "SortedType.cpp"

#include <iostream>

int main()
{
    int s, m, h;
    timeStamp t;
    cout << "five time stamp: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> s >> m >> h;
        t.InsertItem(s, m, h);
    }
    cout << "delete time stamp: " << endl;
    cin >> s >> m >> h;
    t.DeleteItem(s, m, h);

    cout << "display time stamps: " << endl;
    t.PrintTimes();
    return 0;
}
