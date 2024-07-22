#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,n,f[1005],mx=0;
int main ()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        f[a]++;
    }
    for(int i=1;i<=1000;i++)
    {
        mx=max(mx,f[i]);
    }
    for(int i=1;i<=1000;i++)
        if(mx==f[i])
        cout<<i<<endl;
}
