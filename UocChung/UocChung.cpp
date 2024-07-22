#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll x,y,s;
int main()
{
    freopen("UocChung.Inp","r",stdin);
    freopen("UocChung.Out","w",stdout);
    cin>>x;
    cin>>y;
    for(int i=1;i<=sqrt(x);i++)
    if (x%i==0)
    {
        if (y%i==0) s=s+i;
        int j=x/i;
        if (i<j and y%j==0)
            s=s+j;
    }
        cout<<s;
}
