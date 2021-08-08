#include<iostream>

#include<stack>

using namespace std;
#include <iostream>
#include"StackType.h"
#include"StackType.cpp"
#include <string>

using namespace std;

bool IsParenthesisBalance(string infix)
{
    StackType<char> Checking;
    bool balance = true;
    for (int i = 0; i <infix.length(); i++){
        if(infix[i] == '('){
            Checking.Push('(');
        }
        else if(infix[i] == ')'){
            try{
                Checking.Pop();
            }
            catch(EmptyStack e){
                balance = false;
            }
        }
    }
    if(balance){
        if(Checking.IsEmpty())
            return true;
        else
            return false;
    }
    else
        return false;
}

bool IsOperator(char c)
{
    if(c == '+' || c== '-' || c =='*' || c== '/')
        return true;
    else
        return false;
}

bool StackIsOperator(string s)
{
    if(s == "+" || s== "-" || s =="*" || s== "/")
        return true;
    else
        return false;
}

int precedence(char c)
{
    if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}

int StackPrecedence(string s)
{
    if(s == "*" || s == "/")
        return 2;
    else if(s == "+" || s == "-")
        return 1;
    else
        return -1;
}

StackType<string> StringToStack(string infix)
{
    StackType<string> infixStack;
    StackType<string> Istack;
    for(int i = 0; i < infix.length(); i++)
    {
        if(infix[i] == ')' || infix[i] == '(' || IsOperator(infix[i]))
        {
            string s = "";
            s+= infix[i];
            infixStack.Push(s);
        }
        else
        {
            string num = "";
            while(infix[i] >= '0' && infix[i] <= '9')
            {
                num+= infix[i];
                i++;
            }
            infixStack.Push(num);
            i--;
        }
    }
    while(!infixStack.IsEmpty())
    {
        Istack.Push(infixStack.Top());
        infixStack.Pop();
    }

    return Istack;
}


string InfixToPostfix(string infix)
{
    if(!IsParenthesisBalance(infix)){
        return "-1";
    }
    else{
        StackType<char> op;
        string postfix;
        for(int i = 0; i< infix.length(); i++){
            if(infix[i] == '(')
            {
                op.Push(infix[i]);
            }
            else if(infix[i] == ')')
            {
                while(op.Top()!= '(')
                {
                    postfix += op.Top();
                    op.Pop();
                }
                op.Pop();
            }
            else if (IsOperator(infix[i]))
            {
                if(IsOperator(infix[i+1]) || infix[i+1] == '\0')
                {
                    postfix = "-1";
                    return postfix;
                }
                else if(op.IsEmpty())
                    op.Push(infix[i]);
                else if(precedence(infix[i]) > precedence(op.Top()))
                {
                    op.Push(infix[i]);
                }
                else
                {
                    while((!op.IsEmpty()) && precedence(infix[i]) <= precedence(op.Top())){
                        postfix+= op.Top();
                        op.Pop();
                    }
                    op.Push(infix[i]);
                }
            }
            else{
                postfix+= infix[i];
            }
        }

        while(!op.IsEmpty()){
            postfix += op.Top();
            op.Pop();
        }
        return postfix;
    }
}

StackType<string> StackInfixToPostfix(StackType<string> infix)
{
    StackType<string> op;
    StackType<string> postfix;
    StackType<string> spostfix;
    while(!infix.IsEmpty()){
        if(infix.Top() == "(")
        {
            op.Push(infix.Top());
        }
        else if(infix.Top() == ")")
        {
            while(op.Top()!= "(")
            {
                postfix.Push(op.Top());
                op.Pop();
            }
            op.Pop();
        }
        else if (StackIsOperator(infix.Top()))
        {
            if(op.IsEmpty())
                op.Push(infix.Top());
            else if(StackPrecedence(infix.Top()) > StackPrecedence(op.Top()))
            {
                op.Push(infix.Top());
            }
            else
            {
                while((!op.IsEmpty()) && StackPrecedence(infix.Top()) <= StackPrecedence(op.Top())){
                    postfix.Push(op.Top());
                    op.Pop();
                }
                op.Push(infix.Top());
            }
        }
        else{
            postfix.Push(infix.Top());
        }
        infix.Pop();
    }

    while(!op.IsEmpty()){
        postfix.Push(op.Top());
        op.Pop();
    }
    while(!postfix.IsEmpty())
    {
        spostfix.Push(postfix.Top());
        postfix.Pop();
    }
    return spostfix;
}

double calculate(double a, double b, char c)
{
    if(c == '+')
        return a+b;
    else if(c == '-')
        return a-b;
    else if (c=='*')
        return a*b;
    else if (c == '/')
        return a/b;
}

double StackCalculate(double a, double b, string s)
{
    if(s == "+")
        return a+b;
    else if(s == "-")
        return a-b;
    else if (s == "*")
        return a*b;
    else if (s == "/")
        return a/b;
}


double postfixEvaluation(string postfix)
{
    StackType<double> evaluation;
    for (int i = 0; i < postfix.length(); i++)
    {
        if(IsOperator(postfix[i]))
        {
            double b = evaluation.Top();
            evaluation.Pop();
            double a = evaluation.Top();
            evaluation.Pop();
            double c = calculate(a,b,postfix[i]);
            evaluation.Push(c);
        }
        else{
            evaluation.Push(postfix[i]-'0');
        }
    }
    return evaluation.Top();
}


double StackPostfixEvaluation(StackType<string> postfix)
{
    StackType<double> evaluation;
    while(!postfix.IsEmpty())
    {
        if(StackIsOperator(postfix.Top()))
        {
            double b = evaluation.Top();
            evaluation.Pop();
            double a = evaluation.Top();
            evaluation.Pop();
            double c = StackCalculate(a,b,postfix.Top());
            evaluation.Push(c);
        }
        else{
            evaluation.Push(stod(postfix.Top()));
        }
        postfix.Pop();
    }
    return evaluation.Top();
}


int main()
{
    for(int i = 0; i < 4; i++)
    {
        string infix,postfix;
        char cpostfix;
        cout<<"Enter the expression: "<< endl;
        cin>>infix;
        postfix = InfixToPostfix(infix);
        if(postfix == "-1")
            cout<<"Invalid Expression "<< endl;
        else{
            cout<<"Postfix: " << postfix<< endl;
            StackType<string> stackInfix = StringToStack(infix);
            StackType<string> sInfix = StringToStack(infix);
            StackType<string> stackPostfix = StackInfixToPostfix(sInfix);

            double ans = StackPostfixEvaluation(stackPostfix);
            cout<<"Answer: "<< ans << endl;
        }
    }
    return 0;
}
