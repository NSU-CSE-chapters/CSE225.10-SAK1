#include "SortedType.h"
#include "SortedType.cpp"

#include <iostream>
using namespace std;

int main()
{
    int s, m, h;
    timeStamp time;
    cout << "five time stamp: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> s >> m >> h;
        time.InsertItem(s, m, h);
    }
    cout << "delete time stamp: " << endl;
    cin >> s >> m >> h;
    time.DeleteItem(s, m, h);

    cout << "display time stamps: " << endl;
    time.PrintTimes();
    return 0;
}
