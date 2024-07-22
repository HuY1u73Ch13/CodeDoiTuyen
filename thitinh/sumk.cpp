#include<bits/stdc++.h>
#define ll long long
#define N 1000005
using namespace std ;
ll n,k,b,s[N],mn=-1e18;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sumk.inp","r",stdin);
    freopen("sumk.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>b;s[i]=s[i-1]+b;
    }
    for(int i=k;i<=n;i++)
    {
        mn=max(s[i]-s[i-k],mn);
    }
    cout<<mn;
}