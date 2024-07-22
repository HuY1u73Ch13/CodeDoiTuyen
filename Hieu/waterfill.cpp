#pragma GCC optimize("O2")
#include <bits/stdc++.h>
#define ll long long
#define name "waterfill"
using namespace std;
int n;
ll mx = LLONG_MIN;
ll ans,k;
ll a[100005];
bool check(ll x)
{
    ll s = 0;
    for (int i=1;i<=n;++i)
        s += a[i]-x*k;
    return s <= 0;
}
void xuly()
{
    cin>>n>>k;
    for (int i=1;i<=n;++i)
        cin>>a[i] , mx = max(mx,a[i]);
    ll d=1,c=(mx+k-1)/k,g;
    ans = mx;
    while(d<=c){
        g = d+c>>1;
        if (check(g)){
            ans = g;
            c = g - 1;
        }
        else d = g + 1;
    }
    cout<<ans;
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(name".inp","r",stdin);
    freopen(name".out","w",stdout);
    xuly();
    return 0;
}
