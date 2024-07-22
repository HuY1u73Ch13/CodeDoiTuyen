#pragma GCC target ("avx2")
#pragma GCC optimze ("02")
#pragma GCC optimize ("unroll-loops")
#include<bits/stdc++.h>
#define N 1000000
#define ll long long
using namespace std ;
int n,b,f[N],mi=1,kq1,kq2,mn=-1e9;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DEMHANG.inp","r",stdin);
    freopen("DEMHANG.out","w",stdout);
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        f[b]++;
        mn=max(mn,b);
    }
    for(int i=0;i<=mn;i++)
    {
        //cout<<f[i]<<" ";
        if(f[i]>mi)
        {
            kq1=i;
            kq2=f[i];
            mi=f[i];
        }
    }
    if(kq1==0 && kq2==0)
    {
        cout<<f[1]<<" "<<1;
    }
    else cout<<kq1<<" "<<kq2;
}