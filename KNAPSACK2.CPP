#pragma GCC optimize("O2")
#include <bits/stdc++.h>
#define ll long long
#define name "KNAPSACK2"
#define v first
#define w second
using namespace std;
ll mx[10005],f[5005][5005],n,m;
pair <ll,ll> a[1005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(name".INP","r",stdin);
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        cin>>a[i].v>>a[i].w;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            f[i][j]=f[i-1][j];
            if (j>=a[i].w)
                f[i][j]=max(f[i][j],mx[j-a[i].w]+a[i].v);
            mx[j]=max({mx[j-1],f[i][j],mx[j]});
        }
    }
    cout<<mx[m];
}
