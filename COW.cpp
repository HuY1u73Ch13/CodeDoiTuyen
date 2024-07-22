#pragma GCC optimize("O2")
#include <bits/stdc++.h>
#define ll long long
#define name "COW"
#define f first
#define s second
using namespace std;
pair <ll,ll> a[100005];
ll mx,n,d,f[100005],c;
ll cnp(ll x,ll p)
{
    ll d(1),c(p),g,m(p);
    while(d<=c)
    {
        g=(d+c)/2;
        if (a[g].f>=x)
        {
            m=g;
            c=g-1;
        }
        else
            d=g+1;
    }
    return m;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(name".INP","r",stdin);
    freopen(name".OUT","w",stdout);
    cin>>n>>d;
    for (int i=1;i<=n;i++)
        cin>>a[i].f>>a[i].s;
    sort(a+1,a+1+n);
    for (int i=1;i<=n;i++)
        f[i]=f[i-1]+a[i].s;
    mx=a[1].s;
    for (int i=2;i<=n;i++)
    {
        c=cnp(a[i].f-d,i);
        mx=max(mx,f[i]-f[c-1]);
    }
    cout<<mx;
}
