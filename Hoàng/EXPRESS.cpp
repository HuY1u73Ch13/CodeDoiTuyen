#include<bits/stdc++.h>
#define ll long long
#define N 100005
using namespace std ;
ll n,k,f[N],s(0),d(0);
bool sxep(ll x,ll y)
{
    return x>y;
}
int main ()
{
    freopen("EXPRESS.inp","r",stdin);
    freopen("EXPRESS.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>f[i];
    }
    sort(f+1,f+1+n,sxep);
    for(int i=1;i<=k;i++)
    {
        s+=f[i];
    }
    for(int i=k+2;i<=n;i++)
    {
        f[k+1]=f[k+1]-f[i];
    }
    cout<<s+f[k+1];
}