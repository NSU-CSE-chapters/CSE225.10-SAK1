#include "SortedType.h"
#include "SortedType.cpp"

#include <iostream>
using namespace std;

int main()
{
    SortedType<int> list;

    list.InsertItem(5);
    list.InsertItem(10);
    list.InsertItem(5);
    list.InsertItem(5);

    for (size_t i = 0; i < list.LengthIs(); i++)
    {
        int x;

        list.GetNextItem(x);
        }

    cout << endl;
}
