#pragma GCC optimize("O2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("NUMBERX.Inp","r",stdin);
    freopen("NUMBERX.Out","w",stdout);
    cin>>a>>b;
    if (a==b)
    {
        cout<<a;
        return 0;
    }
    if (a*b/__gcd(a,b)-a-b<0)
        cout<<2*a*b/__gcd(a,b)-a-b;
    else
        cout<<a*b/__gcd(a,b)-a-b;

}
