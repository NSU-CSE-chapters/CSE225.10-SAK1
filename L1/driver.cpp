#include "declarationFile.h"

#include<iostream>

using namespace std;


int main() {
    dynArr ar(10);

    for (int i = 0; i < 10; i++) {
        ar.setValue(i, ((i * 3) + 1));
    }


    for (int i = 0; i < 10; i++) {
        cout << ar.getValue(i) << " ";
    }

    cout << endl;


}