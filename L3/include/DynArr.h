#ifndef DYNARR_H
#define DYNARR_H

template<class T>


class DynArr
{

private:
    T *data;
    int size;
public:
    DynArr();
    DynArr(int);
    ~DynArr();
    void setValue(int, T);
    T getValue(int);

};

#endif // DYNARR_H


