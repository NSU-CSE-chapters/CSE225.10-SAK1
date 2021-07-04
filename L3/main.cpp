#include <iostream>
#include"DynArr.h"

using namespace std;


int main()
{
    // DynArr<int> arr2;
    DynArr<int> arr2(7);

    // arr2.allocate(7);

    //user input
    cout<<"enter the element of the array: ";
    for(int i=0; i<7; i++)
    {
        int x;
        cin>>x;
        arr2.setValue(i,x );
    }


    // print
    cout<<"displaying : ";
    for(int i=0; i<7; i++)
    {
        cout<<arr2.getValue(i)<<" ";
    }


    cout<<endl;


    arr2.~DynArr();

    return 0;
}
