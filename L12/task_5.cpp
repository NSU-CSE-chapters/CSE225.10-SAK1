
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

int DecToBin(int dec)
{

    if (dec == 0)
        return 0;
    else
        return (dec % 2 + 10 * DecToBin(dec / 2));
}

/********** Main()  function **********/

int main()
{
    f12r;
    int n;
    cin >> n;

    cout << "Decimal to binary is: ";
    cout << DecToBin(n) << endl;

    return 0;
}