#include<bits/stdc++.h>
using namespace std ;
long long b,a[10000005],k;
int main ()
{
    freopen("SortReArr.Inp","r",stdin);
    freopen("SortReArr.Out","w",stdout);
    cin>>b>>k;
    for (int i=1;i<=b;i++)
    cin>>a[i];
    sort(a+1,a+1+k);
    reverse(a+1,a+1+k);
    for (int i=1;i<=b;i++)
        cout<<a[i]<<" ";
}
