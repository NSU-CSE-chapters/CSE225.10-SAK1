#include <iostream>

#include "StackType.h"
#include "StackType.cpp"

using namespace std;

int main() {
    StackType<int> stackType(5);


    if (stackType.isEmpty()) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is not Empty" << endl;
    }

    cout << "push four items: " << endl;

    for (int i = 0; i < 4; ++i) {
        int x;
        cin >> x;
        stackType.push(x);
    }

    if (stackType.isEmpty()) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is not Empty" << endl;
    }


    if (stackType.isFull()) {
        cout << "Stack is Full" << endl;
    } else {
        cout << "Stack is not Full" << endl;
    }


    cout << "display all the inserted items: " << endl;
    stackType.displayStack();

    cout << "push another item: ";
    int x;
    cin >> x;
    stackType.push(x);
    cout << "display:  " << endl;
    stackType.displayStack();


    if (stackType.isFull()) {
        cout << "Stack is Full" << endl;
    } else {
        cout << "Stack is not Full" << endl;
    }


    stackType.pop();
    stackType.pop();

    cout << "top item: ";
    cout << stackType.topItem() << endl;

    stackType.~StackType();

    cout << "enter parenthesis" << endl;


    int count = 0;

    while (count < 4) {
        StackType<char> stackParenthesis(10);
        string parenthesis;
        cin >> parenthesis;

        int len = parenthesis.length();
        for (int i = 0; i < len; ++i) {
            if (parenthesis[i] == '(') {
                stackParenthesis.push(parenthesis[i]);
            } else if (parenthesis[i] == ')') {
                if (stackParenthesis.isFull()) {
                    return 0;
                }

                stackParenthesis.pop();
            } else {
                continue;
            }
        }

        if (stackParenthesis.isEmpty()) {
            cout << "Balanced" << endl;
        } else {
            cout << "Not balanced" << endl;
        }
        count++;
    }


    return 0;
}
