#include <bits/stdc++.h>
#define N 1000005
#define ll long long
using namespace std;
ll n,d=0,a[N];
void sang()
{
    fill(a+1,a+N+1,1);
    a[0]=a[1]=0;
    for (ll i=2; i*i<=N; i++)
        if (a[i]==1)
        {
            for (ll j=i*i; j<=N; j+=i)
            a[j]=0;
        }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("bai3.inp","r",stdin);
    freopen("bai3.out","w",stdout);
    sang();
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
        if (a[i]) d++;
    cout<<d;
}