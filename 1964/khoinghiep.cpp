#pragma GCC target ("avx2")
#pragma GCC optimze ("02")
#pragma GCC optimize ("unroll-loops")
#include<bits/stdc++.h>
#define N 100005
#define ll long long
using namespace std;
pair<ll,ll> f[N];
ll n,e,kq=0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("khoinghiep.inp","r",stdin);
    freopen("khoinghiep.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>f[i].first>>f[i].second;
    }
    sort(f+1,f+n+1);
    e=0;
    for(int i=1;i<=n;++i)
    {
        if(e==f[i].first) e++;
        else if(e<f[i].first)
        {
            kq=kq+f[i].second;
            e++;
        }
    }
    cout<<kq;
}
