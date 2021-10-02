#include "StackType.h"
#include "StackType.cpp"
#include <iostream>

using namespace std;

int main() {
    // an empty stack

    StackType<char> st(100);
    cout << "Enter a String: ";
    string input;
    getline(cin, input);

    int len = input.length();

    // push character of string to stack
    for (int i = 0; i < len; i++) {
        st.push(input[i]);
    }

    string revString;

    //pop all character of the string and print them back
    cout<<"Reverse String: ";
    for (int i = 0; i < len; i++) {
        char x;

        revString[i] = st.pop(x);
        cout << x;
    }

    cout << endl;

    return 0;
}