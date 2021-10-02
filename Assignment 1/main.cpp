#include "CheckParenthesis.h"
#include "CheckParenthesis.cpp"
#include <iostream>
using namespace std;
int main()
{
    string expression;
    cout << "Input: ";
    // input expression
    cin >> expression;

    int len = 0;
    // count how many parenthesis in the mathemetical expression
    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '(' || expression[i] == ')')
        {
            len++;
        }
    }

    CheckParenthesis checkParenthesis(len);

    cout << "Output: ";

    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '(')
        {
            checkParenthesis.push(expression[i]);
        }
        else if (expression[i] == ')')
        {
            if (checkParenthesis.isEmpty())
            {
                cout << "Not Balanced" << endl;
                return 0;
            }

            checkParenthesis.pop();
        }
        else
        {
            continue;
        }
    }

    if (checkParenthesis.isEmpty())
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }
}
