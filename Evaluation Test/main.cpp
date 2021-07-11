#include <iostream>
#include "MinMax.h"
#include "MinMax.cpp"

using namespace std;

int main() {


//    MinMax<double> minMax;
//    double *num = new double[5];
//
//    // assign values
//
//    for (int i = 0; i < 5; ++i) {
//        double x;
//        cin >> x;
//        num[i] = x;
//
//
//    }
//
//
//    minMax.initializeMinMax(num, 5);
//
//    // print min and max
//
//    cout << "Maximum double Element is " << minMax.getMax() << endl;
//    cout << "Minimum double Element is " << minMax.getMin() << endl;


    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count += 1;
        }
    }

    cout << count << endl;


    return 0;
}
