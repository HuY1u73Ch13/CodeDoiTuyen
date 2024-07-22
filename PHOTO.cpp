#pragma GCC optimize("O2")
#include <bits/stdc++.h>
#define ll long long
#define name "PHOTO"
using namespace std;
ll kc,a[100005],b[100005],x,y,z,n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(name".INP","r",stdin);
    freopen(name".OUT","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        if (b[i]==1) x=a[i];
        if (b[i]==2) y=a[i];
        if (b[i]==3) z=a[i];
    }
    kc=max(max(x,y),z)-min(min(x,y),z);
    for (int i=1;i<=n;i++)
    {
        if (b[i]==1) x=a[i];
        if (b[i]==2) y=a[i];
        if (b[i]==3) z=a[i];
        kc=min(kc,max(max(x,y),z)-min(min(x,y),z));
    }
    cout<<kc;
}
