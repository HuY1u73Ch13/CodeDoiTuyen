#include <bits/stdc++.h>
#define ll long long
#define N 1000005
using namespace std;
ll n,a[N];
bool kt(ll n)
{
    ll s(1),i,m(sqrt(n));
    for (i=2;i<=m;i++)
    {
        if (n%i==0)
        {
            s+=i;
            s+=n/i;
        }
    }
    if (m*m==n) s-=m;
    if (s==n) return true;
    return false;
}
int main()
{
    freopen("HOANHAO.inp","r",stdin);
    freopen("HOANHAO.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(kt(a[i])) cout<<a[i]<<" ";
    }
}