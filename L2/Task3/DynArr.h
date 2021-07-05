//
// Created by f12r on ৬/৭/২১.
//

#ifndef TASK3_DYNARR_H
#define TASK3_DYNARR_H


class DynArr {
private:
    int **data;
    int row,col;
public:
    DynArr();
    DynArr(int ,int);
    void setValue(int, int, int);
    int getValue(int,int);

    ~DynArr();

};


#endif //TASK3_DYNARR_H
