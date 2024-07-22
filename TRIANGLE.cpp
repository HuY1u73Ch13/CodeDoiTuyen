#include <bits/stdc++.h>
#define ll long long
#define name "TRIANGLE"
using namespace std;
int n,a[1005],b[1005],C[1005],ans,T,P;
int tknp1(ll x,ll d,ll c)
{
    ll g,kq=0;
    while(d<=c)
    {
        g=(d+c)/2;
        if (C[g]>x)
        {
            kq=g;
            c=g-1;
        }
        else
            d=g+1;
    }
    return kq;
}
int tknp2(ll x,ll d,ll c)
{
    ll g,kq=0;
    while(d<=c)
    {
        g=(d+c)/2;
        if (C[g]<x)
        {
            kq=g;
            d=g+1;
        }
        else
            c=g-1;
    }
    return kq;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen(name".INP","r",stdin);
    //freopen(name".OUT","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++) cin>>b[i];
    for (int i=1;i<=n;i++) cin>>C[i];
    sort(C+1,C+1+n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            T=tknp1(abs(a[i]-b[j]),1,n);
            P=tknp2(a[i]+b[j],1,n);
            ans+=P-T+1;
        }
    }
    cout<<ans;
}
