#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include <iostream>

int main() {
    int m;
    cout << "enter m: ";
    cin >> m;

    int firstArray[m];

    cout << "enter the elements of the first array: ";
    for (int i = 0; i < m; ++i) {
        cin >> firstArray[i];
    }
    int n;
    cout << "enter n: ";
    cin >> n;

    int secondArray[n];

    cout << "enter the elements of the first array: ";
    for (int i = 0; i < n; ++i) {
        cin >> secondArray[i];
    }


    int combined[m + n];

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (firstArray[i] < secondArray[j]) {
            combined[k] = firstArray[i];
            k = k + 1;
            i = i + 1;
        } else {
            combined[k] = secondArray[j];
            k = k + 1;
            j = j + 1;
        }
    }

    while (i < m) {
        combined[k] = firstArray[i];
        k = k + 1;
        i = i + 1;
    }

    while (j < n) {
        combined[k] = secondArray[j];
        k = k + 1;
        j = j + 1;
    }

    cout << "Output" << endl;
    for (int i = 0; i < m + n; i++) {
        cout << combined[i] << " ";
    }
    cout << endl;
    return 0;
}
