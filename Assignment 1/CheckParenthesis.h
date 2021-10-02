//
// Created by f12r on ১২/৮/২১.
//

#ifndef ASSIGNMENT_1_CHECKPARENTHESIS_H
#define ASSIGNMENT_1_CHECKPARENTHESIS_H
class CheckParenthesis
{
private:
    int size;
    int *list;
    int top;

public:
    CheckParenthesis();
    CheckParenthesis(int);
    void push(int);
    void pop();
    int topItem();
    bool isEmpty();
    bool isFull();
};

#endif //ASSIGNMENT_1_CHECKPARENTHESIS_H
