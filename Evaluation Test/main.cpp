#include <iostream>
#include "MinMax.h"
#include "MinMax.cpp"

using namespace std;

int main() {


    MinMax<double> minMax;
    double *num = new double[5];

    // assign values

    for (int i = 0; i < 5; ++i) {
        double x;
        cin >> x;
        num[i] = x;


    }


    minMax.initializeMinMax(num, 5);

    // print min and max

    cout << "Maximum double Element is " << minMax.getMax() << endl;
    cout << "Minimum double Element is " << minMax.getMin() << endl;

    return 0;
}
