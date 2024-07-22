#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll n,a[100005],mn=0,s=1;
int main ()
{
    freopen("daytang.inp","r",stdin);
    freopen("daytang.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    a[n+1]=1e18;
    for(int i=2;i<=n;i++)
    {
        if(a[i]>=a[i-1]) s++;
        else
        {
            if(s>mn)
            {
                mn=s;
            }
            s=1;
        }
    }
    mn=max(mn,s);
    cout<<mn;
}