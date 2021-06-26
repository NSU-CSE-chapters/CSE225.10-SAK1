#include "declarationFile.h"

#include <iostream>

using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}

dynArr::dynArr(int size)
{
    data = new int[size];
    this->size = size;
}

dynArr::~dynArr()
{
    delete[] data;
}

void dynArr::allocate(int s)
{
    data = new int[s];
    this->size = s;
}

int dynArr::getValue(int index)
{
    return data[index];
}

void dynArr::setValue(int index, int value)
{
    this->data[index] = value;
}

