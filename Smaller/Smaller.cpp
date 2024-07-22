#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll n,a[10000005],q,x;
int main ()
{
    freopen("Smaller.Inp","r",stdin);
    freopen("Smaller.Out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    cin>>q;
    for (int i=1;i<=q;i++)
    {
        cin>>x;
        int d=0;
        for (int j=1;j<=n;j++)
            if (a[i]<a[x]) d++;
        cout<<d<<endl;
    }
}
