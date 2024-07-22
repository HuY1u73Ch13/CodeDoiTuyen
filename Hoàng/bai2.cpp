#include<bits/stdc++.h>
#define ll long long
#define N 1000006
using namespace std ;
ll n,f[N],kq(0);
string s;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    cin>>n>>s;
    f[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i-1]=='U') f[i]=f[i-1]+1;
        else f[i]=f[i-1]-1;
    }
    for(int i=1;i<=n;i++)
    {
        //cout<<f[i]<<" ";
        if(f[i-1]>=0 && f[i]<0) kq++;
    }
    cout<<kq;
}