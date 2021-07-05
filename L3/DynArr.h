//
// Created by f12r on ৫/৭/২১.
//

#ifndef L3_DYNARR_H
#define L3_DYNARR_H

template<class T>
class DynArr {
private:
    T *data;
    int size;

public:
    DynArr();
    DynArr(int );
    void setValue(int, T);
    int getValue(int );
    ~DynArr();


};


#endif //L3_DYNARR_H
