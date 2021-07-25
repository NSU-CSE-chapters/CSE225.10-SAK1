

#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include<bits/stdc++.h>

using namespace std;

int main() {

    UnsortedType<int> unsortedType;

    unsortedType.InsertItem(5);
    unsortedType.InsertItem(7);
    unsortedType.InsertItem(6);
    unsortedType.InsertItem(9);

    cout << "display: " << endl;

    unsortedType.GetNextItem();


    cout << "length is: " << unsortedType.LengthIs() << endl;


    unsortedType.InsertItem(1);
    cout << "after inserting 1: ";

    unsortedType.GetNextItem();

    unsortedType.RetrieveItem(4);
    unsortedType.RetrieveItem(5);
    unsortedType.RetrieveItem(9);
    unsortedType.RetrieveItem(10);


    if (unsortedType.IsFull()) {
        cout << "list is full " << endl;
    } else {
        cout << "list is not full" << endl;
    }

    unsortedType.DeleteItem(5);
    if (unsortedType.IsFull()) {
        cout << "list is full " << endl;
    } else {
        cout << "list is not full" << endl;
    }


    unsortedType.DeleteItem(1);
    unsortedType.GetNextItem();

    unsortedType.DeleteItem(6);


    unsortedType.GetNextItem();


   studentInfo student1(1,"Fahim",3.44);
   studentInfo student2(1,"Muntashir",3.44);

   student1.printFunc();


}
