#include <iostream>
#include "DynArr.h"
#include "DynArr.cpp"

using namespace std;
int main() {
    DynArr<int> arr(5);


    for(int i =0; i<5; i++)
    {
        int x;
        cin>>x;
        arr.setValue(i,x);
    }


    // print

    for(int i= 0; i<5; i++)
    {

        cout<<arr.getValue(i)<<" ";
    }

    cout<<endl;
    return 0;
}
