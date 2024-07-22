#include <bits/stdc++.h>
#define N 1000005
#define ll long long
using namespace std;
ll a[N];
ll n, m, d, c, res;
bool check(ll g)
{
    ll s=0;
    for (int i=1; i<=n; i++)
        if (a[i]-g>0) s+=a[i]-g;
    if (s>=m) return true;
    return false;
}
int main()
{
    //freopen("wood.inp","r",stdin);
    //freopen("wood.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        c=max(c,a[i]);
    }
    d=0;
    while (d<=c)
    {
        ll g=(d+c)/2;
        if (check(g))
        {
            res=g;
            d=g+1;
        }
        else c=g-1;
    }
    cout<<res;
    return 0;
}

