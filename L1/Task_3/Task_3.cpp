#include <iostream>

using namespace std;

int main()
{

    int **arr;
    int row, col;
    cout << "enter rows : ";
    cin >> row;

    arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        cout << "enter " << (i + 1) << " cols size: ";
        cin >> col;
        arr[i] = new int[col];
    }

    // read
    int i;
    for (int i = 0; i < row; i++)
    {
        int length = sizeof(*arr) / sizeof(arr[i]);
        for (int j = 0; j < length; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print

    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < *col[i]; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
