#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll n,a[1000005],s=0;
int main ()
{
    ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
freopen("TBC.Inp ","r",stdin);
freopen("TBC.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
        for(int i=2;i<n;i++)
        if(a[i-1]+a[i+1]==2*a[i])
        cout<<i<<endl;

}
