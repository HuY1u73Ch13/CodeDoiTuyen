#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll n,k,a[1000005],s,e;
int main ()
{
    freopen("SumCMax1.Inp","r",stdin);
    freopen("SumCMax1.Out","w",stdout);
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    s=e=a[k];
    for (int i=k-1;i>=1;i--)
    {
         s=s+a[i];
         if (s>e) e=s;
    }
    cout<<e;
}
