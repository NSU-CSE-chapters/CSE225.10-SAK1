//
// Created by f12r on ৬/৭/২১.
//
#include <iostream>
#include "DynArr.h"

using namespace std;

DynArr::DynArr() {
    data = nullptr;
    row = 0, col = 0;


}


DynArr::DynArr(int row, int col) {
    data = new int *[row];

    for (int i = 0; i < row; ++i) {
        data[i] = new int[col];
    }

}

void DynArr::setValue(int row, int col, int value) {

    data[row][col] = value;
}

int DynArr::getValue(int row, int col) {
    return data[row][col];
}

DynArr::~DynArr() {
    for (int i = 0; i < row; ++i) {
        delete data[i];
    }
    delete[] data;
}