#include <bits/stdc++.h>
#define ll long long
#define name "SUB"
using namespace std;
int n,d,c,g,ans,s;
ll a[1000005];
bool check(int g)
{
    ll x=0;
    for (int i=1;i<=g;i++)
        x+=a[i];
    if (x>=s) return true;
    for (int i=g+1;i<=n;i++)
    {
        x+=a[i]-a[i-g];
        if (x>=s) return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(name".INP","r",stdin);
    freopen(name".OUT","w",stdout);
    cin>>n>>s;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    ans=n+1;
    d=1;
    c=n;
    while(d<=c)
    {
        g=(d+c)/2;
        if (check(g))
        {
            ans=min(ans,g);
            c=g-1;
        }
        else
            d=g+1;
    }
    cout<<ans;
}
