#include<bits/stdc++.h>
#define ll long long
#define N 100001
using namespace std ;
ll a[N];
ll n,l,r,res;
ll s,t;
int main ()
{
    freopen("contro.inp","r",stdin);
    freopen("contro1.out","w",stdout);
    cin>>n>>t;
    res=n+1;
    for(int i=1;i<=n;i++) cin>>a[i];
    l=1;r=l;s=a[1];
    while(l<=r and r<=n)
    {
        if(s<t)
        {
            r++;
            s=s+a[r];
        }
        else
        {
            res=min(res,r-l+1);
            s=s-a[l];
            l++;
        }
    }
    cout<<res;
}
