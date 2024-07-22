#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std ;
ll n,a[N+5],s(0);
int main ()
{
    freopen("book.inp","r",stdin);
    freopen("book.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1,greater<ll>());
    for(int i=1;i<=n;i=i+3)
    {
        s+=a[i]+a[i+1]+a[i+2]-a[i+2];
    }
    cout<<s;
}