#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Enter N: ";
    int N;
    cin >> N;
    UnsortedType<int> arr(N);

    // input elements into the array

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        arr.InsertItem(x);
    }

    cout << "Enter x: ";
    int x, loc;
    cin >> x;
    bool b;
    arr.RetrieveItem(x, b, loc);
    cout<<"Output: ";
    if (b) {
        cout << loc << endl;

    } else {
        cout << -1 << endl;
    }


    return 0;
}
