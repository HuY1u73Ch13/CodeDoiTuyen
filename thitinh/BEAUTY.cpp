#include<bits/stdc++.h>
#define ll long long
#define nmax 10000000
using namespace std ;
bool NT[nmax+5];
string s;
ll m,v(0),n;
void sang()
{
    memset(NT,true,sizeof(NT));
    NT[0]=NT[1]=false ;
    for(int i=2;i<=sqrt(nmax);i++)
        if(NT[i])
        for(int j=i*i;j<=nmax;j=j+i)
        NT[j]=false;
}
ll tcs(ll a)
{
    ll tam,kq(0);
    while(a!=0)
    {
        tam=a%10;
        kq+=tam*tam;
        a/=10;
    }
    return kq;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BEAUTY.inp","r",stdin);
    freopen("BEAUTY.out","w",stdout);
    sang();
    cin>>n;
    for(int i=1;i<=6000000;i++)
    {
        m=tcs(i);
        if(NT[m]) v++;
        if(v==n) {cout<<i;return 0;}
    }
}