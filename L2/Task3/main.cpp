#include <iostream>
#include "DynArr.h"
//#include "DynArr.cpp"

using namespace std;
int main() {

    DynArr arr(3,3);

    // read data

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int x;
            cin>>x;

            arr.setValue(i,j,x);
        }
    }

    //print data

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<<arr.getValue(i,j)<<" ";
        }
        cout<<endl;
    }


    return 0;
}
