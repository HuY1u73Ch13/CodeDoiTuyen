#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,b[1000005],c,d,mn=-1e18;
int main ()
{
    freopen("MaxUV.Inp","r",stdin);
    freopen("MaxUV.Out","w",stdout);
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b[i];
    }
    cin>>c>>d;
    for(int j=c;j<=d;j++)
    {
        mn=max(mn,b[j]);
    }
    cout<<mn;
}
