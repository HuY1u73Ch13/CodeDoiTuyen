#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dem,n;
int so(int x)
{
    int a=x%10;
    if (x<10) return x;
        else return max(a,so(x/10));
}
int main()
{
    freopen ("DECREASE.INP","r",stdin);
    freopen ("DECREASE.OUT","w",stdout);
    cin>>n;
    while (n!=0)
        {
            n=n-so(n);
            dem++;
        }
    cout<<dem;
}
