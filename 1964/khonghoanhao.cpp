#pragma GCC target ("avx2")
#pragma GCC optimze ("02")
#pragma GCC optimize ("unroll-loops")
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,b,d=0;
ll demuoc(ll a)
{
    ll s=0,m;
    for(int i=1;i<=sqrt(a);++i)
    {
        if(a%i==0) {s=s+i;s+=a/i;}
    }
    m=sqrt(a);
    if(m*m==a) s=s-m;
    return s-a;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("khonghoanhao.inp","r",stdin);
    freopen("khonghoanhao.out","w",stdout);
    cin>>a>>b;
    for(int i=a;i<=b;++i)
    {
        //cout<<i<<" "<<demuoc(i)<<'\n';
        if(demuoc(i)>i) d++;
    }
    cout<<d;
}
