#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,j,k,b[2005],i,m,s(0);
int main()
{
    freopen("sumseq0.inp","r",stdin);
    freopen("sumseq0.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    b[0]=0;
    for (i=1;i<=n;i++)
    {
        cin>>m;
        b[i]=b[i-1]+m;
    }
    for (i=n;i>1;i--)
    {
        for (j=0;j<i;j++)
        {
            if (b[i]-b[j]==0) s++;
        }
    }
    cout<<s;
}
