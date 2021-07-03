//
// Created by f12r on ২৯/৬/২১.
//

#include <iostream>

using namespace std;

int main() {
    char **arr;
    int row, col;
    cout << "enter row and cols: ";
    cin >> row >> col;

    arr = new char *[row];

    for (int i = 0; i < row; i++) {
        arr[i] = new char[col];
    }


    // read chars

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }

    }

    //print

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;

    }


    // dealocate

    for (int i = 0; i < row; i++) {
        delete arr[i];
    }
    delete[] arr;


}
