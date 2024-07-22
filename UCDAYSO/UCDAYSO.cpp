#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll n,a[100000005],s,e,d;
int main ()
{
    freopen("UCDAYSO.Inp","r",stdin);
    freopen("UCDAYSO.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    d=a[1];
    for (int i=2;i<=n;i++)
    d=__gcd(d,a[i]);
    for(int i=1;i<=sqrt(d);i++)
        if (d%i==0)
    {
        s=s+i;
        int j=d/i;
        if (i<j) s=s+j;
    }
    cout<<s;
}
