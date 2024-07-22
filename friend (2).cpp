#include <bits/stdc++.h>
#define ll long long
#define N 10000001
using namespace std;
ll a[N];
ll n,b,dem,res;
ll tknp1(ll d,ll c,ll x)
{
    ll l=0;
    while (d<=c)
    {
        ll g=(d+c)/2;
        if (a[g]==x)
        {
            l=g;
            c=g-1;
        }
        else if (a[g]<x) d=g+1;
             else c=g-1;
    }
    return l;
}

ll tknp2(ll d,ll c,ll x)
{
    ll r=0;
    while (d<=c)
    {
        ll g=(d+c)/2;
        if (a[g]==x)
        {
            r=g;
            d=g+1;
        }
        else if (a[g]<x) d=g+1;
             else c=g-1;
    }
    return r;
}
int main()
{
    cin>>n>>b;
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (int i=1; i<= n; i++)
    if (2*a[i]==b) dem++;
    else
    {
        ll d1=tknp1(i+1,n,b-a[i]);
        ll d2=tknp2(i+1,n,b-a[i]);
        if (d1>0)
        res=res+(d2-d1+1);
    }
    res=res+dem*(dem-1)/2;
    if(dem==1) cout<<res+1;
    else cout<<res+dem*(dem-1)/2+dem;
}

