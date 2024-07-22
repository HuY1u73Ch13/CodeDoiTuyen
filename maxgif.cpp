#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b[1000005],mx=-1e9;
int main ()
{
    freopen("maxgif.inp", "r", stdin);
    freopen("maxgif.out", "w", stdout);
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=a;i++)
    {
        mx=max(b[i]+b[i+1],mx);
    }
    cout<<mx;
}
