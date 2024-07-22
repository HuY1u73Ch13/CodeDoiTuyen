#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,b[1000005],m,s(0);
map<int,int> mp;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("pseq.inp","r",stdin);
    freopen("pseq.out","w",stdout);
    cin>>n>>k;
    b[0]=0;
    for (int i=1;i<=n;i++)
    {
        cin>>m;
        b[i]=b[i-1]+m;
    }
    mp[0] = 1;
    for (int i=1;i<=n;i++)
    {
        s+=mp[b[i]-k];
        mp[b[i]]++;
    }
    cout<<s;
}