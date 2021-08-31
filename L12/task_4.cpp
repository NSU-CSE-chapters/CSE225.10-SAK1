
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

int findMin(int a[], int size)
{

    int minEle = a[0];

    if (size == 1)
        return a[0];
    return min(a[size - 1], findMin(a, size - 1));
}
/********** Main()  function **********/

int main()
{
    f12r;
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }   

    cout<<"min value is : ";
    cout << findMin(arr, n) << endl;

    return 0;
}