#include<bits/stdc++.h>
#define ll long long
#define N 100005
using namespace std ;
ll n,a[N],kq(0),v;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BAI4.inp","r",stdin);
    freopen("BAI4.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(a[1]==1)
    {
        v=1;
        for(int i=2;i<=n;i++)
        {
            if(a[i]==1) v++;
            else break;
        }
        for(int i=v+1;i<=n;i++)
        {
            if(a[i]==1)
            {
                kq++;
            }
        }
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            if(a[i]==1) kq++;
        }
    }
    cout<<kq;
}