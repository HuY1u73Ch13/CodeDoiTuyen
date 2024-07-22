#include<bits/stdc++.h>
#define ll long long
#define N 10000
using namespace std;
ll n,a[N+5];
int main ()
{
    freopen("game.inp","r",stdin);
    freopen("game.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cout<<a[n]+a[n-1]+a[n-2];
}