//
// Created by f12r on ২৯/৬/২১.
//

#include <iostream>

using namespace std;

int main()
{

    int *Arr;
    int size;
    cout << "enter array size: ";
    cin >> size;
    Arr = new int[size];

    // assigning value
    cout << "enter the elements: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> Arr[i];
    }

    // printing value

    cout << "the elements are: ";

    for (int i = 0; i < size; ++i)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;

    delete[] Arr;
}