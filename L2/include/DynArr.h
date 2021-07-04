#ifndef DYNARR_H
#define DYNARR_H


class DynArr
{
private:
    int *data;
    int size;


public:
    DynArr();
    DynArr(int );
    void setValue(int, int);
    int getValue(int);
    void allocate(int );

    ~DynArr();



};

#endif // DYNARR_H
