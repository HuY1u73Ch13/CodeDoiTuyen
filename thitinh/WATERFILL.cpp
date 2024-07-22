#include <bits/stdc++.h>
#define N 1000005
#define ll long long
using namespace std;
ll a[N];
ll n, m, d, c, res;
bool check(ll g)
{
    ll s=0;
    for (int i=1;i<=n;++i)
    {
        s+=a[i]-g*m;
    }
    if (s<=0) return true;
    return false;
}
int main()
{
    freopen("waterfill.inp","r",stdin);
    freopen("waterfill.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        c=max(c,a[i]);
    }
    d=0;c=c/m;
    while (d<=c)
    {
        ll g=(d+c)/2;
        if (check(g))
        {
            res=g;
            c=g-1;
        }
        else d=g+1;
    }
    cout<<res;
    return 0;
}

