//
// Created by f12r on ৬/৭/২১.
//

#include "MinMax.h"
#include <iostream>

using namespace std;

template<class T>
MinMax<T>::MinMax() {

    maxElement = -1;
    minElement = -1;

}

template<class T>

void MinMax<T>::initializeMinMax(T *numbers, int size) {


    maxElement = numbers[0];
    minElement = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < minElement)
            minElement = numbers[i];
        if (numbers[i] > maxElement)
            maxElement = numbers[i];

    }
}

template<class T>

T MinMax<T>::getMax() {
    return maxElement;
}

template<class T>

T MinMax<T>::getMin() {
    return minElement;
}