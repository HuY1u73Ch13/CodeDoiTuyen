#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll n,i,kq(0);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("thuaso.inp","r",stdin);
    freopen("thuaso.out","w",stdout);
    cin>>n;
    for(int k=2;k<=n;k++)
    {
        i=2;
        int m=sqrt(k);
        int h=k;
        while (i<=m)
        {
            while (h%i==0)
            {
                h=h/i;kq++;
            }
            i++;
        }
        if (h!=1) kq++;
    }
    cout<<kq;
}