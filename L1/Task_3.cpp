#include<iostream>


using namespace std;



int main()
{

    int **arr;
    int row, col;
    cout<<"enter rows and cols: ";
    cin>>row;

    arr = new int*[row];

    for (int i = 0; i < row; i++)
    {
        cout<<"enter "<<(i+1)<<" row element: ";
        cin>>col;
        arr[i] = new int[col];
    }


    // read
    int i;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < j; j++)
        {
            cin>>arr[i][j];
        }
        
    }


    // print

    
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < j; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    
}