#include<bits/stdc++.h>
using namespace std ;
int n,k,a[10000005],b[10000005],dem=0;
int main ()
{

    freopen("SeqPalin.Inp","r",stdin);
    freopen("SeqPalin.Out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        b[i]=a[i];
    reverse(b+1,b+1+n);
    for (int i=1;i<=n;i++)
    if (a[i]!=b[i])
        dem++;
    if (dem==0) cout<<"Palin";
    else
        cout<<"No palin";
}

