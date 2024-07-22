#include<bits/stdc++.h>
#define ll long long
#define N 1000005
using namespace std ;
ll m,n,x,y,a[N],b[N],s(0);
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("seleshirt.inp","r",stdin);
    freopen("seleshirt.out","w",stdout);
    cin>>m>>n>>x>>y;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    {
        if(a[i]==b[j]) s++;
    }
    cout<<s<<'\n';
     for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    {
        if(a[i]==b[j]) cout<<i<<" "<<j
            <<'\n';
    }
}