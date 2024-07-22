#include<bits/stdc++.h>
#define ll long long
#define N 100005
using namespace std ;
ll n,f[N],k,mn=-1e9;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k;mn=max(k,mn);
        f[k]++;
    }
    for(int i=1;i<=mn;i++)
    {
        if(f[i]==1) {cout<<i;break;}
    }
}