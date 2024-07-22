#pragma GCC target ("avx2")
#pragma GCC optimze ("02")
#pragma GCC optimize ("unroll-loops")
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,c,b[1005],s=0,d=0;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("camdien.inp","r",stdin);
    freopen("camdien.out","w",stdout);
    cin>>a>>c;
    for(int i=1;i<=a;++i)
    {
        cin>>b[i];
    }
    sort(b+1,b+1+a,greater<ll>());
    s+=b[1];
    if(b[1]>=c) cout<<1;
    else
    {
        for(int i=2;i<=a;++i)
        {
            s=s+b[i]-1;
            {
                if(s>=c)
                {
                   cout<<i;
                   return 0;
                }
            }
        }
        cout<<-1;
    }
}
