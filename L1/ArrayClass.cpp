//
// Created by f12r on ২৭/৬/২১.
//

#include <bits/stdc++.h>

using namespace std;

class ArrayClass {
private:
    int *data;
    int length;
    int size;

public:
    ArrayClass() {
        this->size = 10;

        this->data = new int[10];
        this->length=0;

    }

    ArrayClass(int size) {
        this->size = size;
        this->data = new int[size];
        this->length=0;

    }

    ~ArrayClass() {
        delete[] data;
    }

    void display();

    void insert(int index, int value);

    int del(int index);
};

void ArrayClass::display() {
    for (int i = 0; i < length; ++i) {
        cout << data[i] << " ";
    }

    cout << endl;

}


void ArrayClass::insert(int index, int value) {
    if (index >= 0 && index <= length) {

        for (int i = index; i < length; ++i) {
            data[i + 1] = data[i];
        }
        data[index] = value;
        length++;

    }
}

int ArrayClass::del(int index) {
    for (int i = index; i < length; ++i) {
        data[i] = data[i + 1];
    }
    length--;


    return index;
}


int main() {
    ArrayClass arrayClass(10);
    arrayClass.insert(0,5);
    arrayClass.insert(1,10);
    arrayClass.insert(2,15);
    arrayClass.insert(3,20);
    arrayClass.display();

    arrayClass.del(2);
    arrayClass.display();
}