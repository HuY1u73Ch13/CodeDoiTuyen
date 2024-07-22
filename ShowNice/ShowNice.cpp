#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll x,n,a[1000005],d[1000005],ans;
int main ()
{
    freopen("ShowNice.Inp","r",stdin);
    freopen("ShowNice.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        x=a[i];
        d[x]++;
    }
    for(int x=0;x<=1000000;x++)
    {
        if(d[x]>x) ans=ans+d[x]-x;
        if(d[x]<x) ans=ans+d[x];
    }
        cout<<ans;
}
