//
// Created by f12r on ৬/৭/২১.
//

#ifndef EVALUATION_TEST_MINMAX_H
#define EVALUATION_TEST_MINMAX_H

template<class T>

class MinMax {
private:
    T maxElement;
    T minElement;
public:
    MinMax();
    void initializeMinMax(T[], int);
    T getMax();
    T getMin();

};


#endif //EVALUATION_TEST_MINMAX_H
