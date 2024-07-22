#pragma GCC target ("avx2")
#pragma GCC optimze ("02")
#pragma GCC optimize ("unroll-loops")
#include<bits/stdc++.h>
#define ll long long
#define N 1000005
using namespace std ;
ll n,k,l[N],c[N],a[N],b,d,kq;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("daysodep.inp","r",stdin);
    freopen("daysodep.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;++i)
    {
        cin>>b;
        a[i]=b;
        if(b%2!=0) {l[i]=l[i-1]+b;}
        else {l[i]=l[i-1];}
    }
    for(int i=1;i<=n;++i)
    {
        if(a[i]%2==0) {c[i]=c[i-1]+a[i];}
        else {c[i]=c[i-1];}
    }
    for(int i=1;i<n;++i)
    {
        for(int j=2;j<=n;++j)
        {
            if(i!=j && i<j)
            {
                //cout<<i<<" "<<j<<'\n';
                d=(c[j]-c[i-1])-(l[j]-l[i-1]);
                if(d>=0 && d<=k && c[j]-c[i-1]>0 && l[j]-l[i-1]>0)
                {
                    kq++;
                    //cout<<i<<" "<<j<<'\n';
                }
            }
        }
    }
    cout<<kq;
}


