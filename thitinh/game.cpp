#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std ;
ll k,v(0),f[N+5],f1[10005],n,m,mn=-1e9;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("game.inp","r",stdin);
    freopen("game.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        f[++v]=k;
    }
    for(int i=2;i<=10005;i++)
    {
        for(int j=1;j<=v;j++)
        {
            m=f[j]%i;
            f1[m]++;
            mn=max(mn,m);
        }
        for(int k=0;k<=mn;k++)
        {
            if(f1[k]==v) {cout<<i<<" ";}
        }
        memset(f1,0,sizeof(f1));
    }
}