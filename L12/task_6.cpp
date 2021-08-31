
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

double sumOfSeries(int n)
{
    if (n == 0)
        return 1;
    else
        return ((1 / pow(2, n)) + sumOfSeries(n - 1));
}

/********** Main()  function **********/

int main()
{
    f12r;
    int n;
    cin >> n;

    cout << "Sum of the series is : ";
    cout << sumOfSeries(n) << endl;

    return 0;
}