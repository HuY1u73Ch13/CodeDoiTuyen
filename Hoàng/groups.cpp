#include <bits/stdc++.h>
#define ll long long
#define N 1000005
using namespace std;
ll n,a[N],k,kq(0),m1,m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("groups.inp","r",stdin);
    freopen("groups.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];a[i]=abs(a[i]);
    }
    sort(a+1,a+n+1);
    a[0]=-1e18;
    for(int i=1;i<=n;i++)
    {
        //cout<<a[i]<<" ";
        if(a[i]-a[i-1]>k) kq++;
    }
    cout<<kq;
}