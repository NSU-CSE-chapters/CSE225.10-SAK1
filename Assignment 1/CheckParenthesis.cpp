//
// Created by f12r on ১২/৮/২১.
//



#include "CheckParenthesis.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace  std;


CheckParenthesis::CheckParenthesis(int size){
    top = -1;
    this->size  = size;
    list = new int[size];
}

CheckParenthesis::CheckParenthesis() {
    top = -1;
    size  = 0;
    list  = new  int[size];
}


bool CheckParenthesis::isEmpty() {
    return top==-1;

}

bool CheckParenthesis::isFull() {
    return  top==size-1;

}

void CheckParenthesis::push(int item) {
    if (isFull()){
        cout<<"list is full"<<endl;
        return;
    }
    size++;
    top++;
    list[top] = item;
}

void CheckParenthesis::pop() {

    if (isEmpty()){
        cout<<"list is empty"<<endl;
        return ;
    }

    top--;
    size--;
}

int CheckParenthesis::topItem() {
    return list[top];
}

