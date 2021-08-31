
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include <bits/stdc++.h>

using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double EPSILON = 1e-9;
#define MOD 1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"






int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

/********** Main()  function **********/

int main()
{
    f12r;
    int n;
    cin >> n;
    cout<<n<<"th fibonacci is: ";
    cout << fib(n) << endl;

    return 0;
}