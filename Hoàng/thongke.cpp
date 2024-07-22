#include<bits/stdc++.h> 
#define ll long long
using namespace std ;
ll n,a,f[1000005],mn=-1e18;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("thongke.inp","r",stdin);
    freopen("thongke.out","w",stdout);
    memset(f,0,sizeof(f));
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        f[a]++;
        if(a>mn) {mn=a;}
    }
    for(int i=1;i<=mn;i++)
    {
       if(f[i]>0) cout<<i<<" "<<f[i]<<'\n';
    }
}