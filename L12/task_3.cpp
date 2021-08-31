
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include<bits/stdc++.h>
 
using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double EPSILON = 1e-9;
#define MOD     1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"

int sumOfDigits(int n){
    if (n==0)
    {
        return 0;
    }
    return sumOfDigits(n/10)+ n%10;
    
}
/********** Main()  function **********/

int main()
{
    f12r;      
    int n;
    cin>>n;
    cout<<"sum of the digits is: ";
    cout<<sumOfDigits(n)<<endl;    
 
    return 0;
}