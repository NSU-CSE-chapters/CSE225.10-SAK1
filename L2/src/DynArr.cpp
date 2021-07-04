#include "DynArr.h"

#include<iostream>

using namespace std;

DynArr::DynArr()
{
    data = NULL;
    size = 0;
}

DynArr::DynArr(int size)
{
    data = new int[size];

    this->size = size;
}

void DynArr::setValue(int index, int value)
{

    data[index] = value;


}

int DynArr::getValue(int index)
{
    return data[index];
}

void DynArr::allocate(int s)
{
    data = new int[s];
}

DynArr::~DynArr()
{

    delete[] data;
}
