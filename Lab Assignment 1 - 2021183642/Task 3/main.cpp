#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include <iostream>

using namespace std;

int commonAppearances(UnsortedType<int> arr1, int m, UnsortedType<int> arr2, int n) {
    int count = 0, item1, item2;
    for (int i = 0; i < m; ++i) {
        arr1.GetNextItem(item1);
        for (int j = 0; j < n; ++j) {
            arr2.GetNextItem(item2);
            if (item1 == item2) {
                count++;
                arr2.DeleteItem(item2);
                break;
            }

        }
        arr2.ResetList();
    }
    return count;
}


int main() {
    cout << "Enter first array size: ";
    int firstArrSize;
    cin >> firstArrSize;
    UnsortedType<int> array1(firstArrSize);

    // input elements of the first array
    cout << "Enter the element of the first array: ";
    for (int i = 0; i < firstArrSize; ++i) {
        int x;
        cin >> x;
        array1.InsertItem(x);
    }

    cout << "Enter second array size: ";

    int secondArrSize;
    cin >> secondArrSize;
    UnsortedType<int> array2(secondArrSize);

    // input elements of the second array
    cout << "Enter the element of the second array: ";

    for (int i = 0; i < secondArrSize; ++i) {
        int x;
        cin >> x;
        array2.InsertItem(x);
    }

    cout << "Output: ";
    int result = commonAppearances(array1, firstArrSize, array2, secondArrSize);
    cout << result << endl;


    return 0;
}
