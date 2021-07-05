//
// Created by f12r on ৫/৭/২১.
//
#include "DynArr.h"


template<class T>
DynArr<T>::DynArr()
{
    data = new T[10];
    size = 0;
}

template<class T>

DynArr<T>::DynArr(int size)
{
    data = new T[size];
    this->size = size;

}

template<class T>

void DynArr<T>::setValue(int index, T value)
{
    data[index] = value;
}

template<class T>

int DynArr<T>::getValue(int index)
{

    return data[index];
}

template<class T>

DynArr<T>::~DynArr()
{
    delete[] data;
}