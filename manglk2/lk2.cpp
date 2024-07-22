#include<bits/stdc++.h>
#define N 100001
#define ll long long
using namespace std ;
ll n,a[N],P[N],link[N];
int main ()
{
    freopen("lk2.inp","r",stdin);
    freopen("lk2.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        link[i]=P[a[i]];
        P[a[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<P[i]<<" ";
    }
    cout<<"\n";
    for(int i=1;i<=n;i++)
    {
        cout<<link[i]<<" ";
    }
}

