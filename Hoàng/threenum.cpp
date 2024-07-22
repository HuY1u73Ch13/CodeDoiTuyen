#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std ;
ll n,mx=-1e18,f[N],a[N],kq=-1e18,mx2=-1e18,f2[N];
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("threenum.inp","r",stdin);
    freopen("threenum.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];mx=max(a[i],mx);
        f[i]=mx;
    }
    for(int i=n;i>=1;i--)
    {
        mx2=max(a[i],mx2);
        f2[i]=mx2;
    }
    for(int i=2;i<n;i++)
    {
        kq=max(kq,2*f[i-1]-3*a[i]+5*f2[i+1]);
    }
    cout<<kq;
}