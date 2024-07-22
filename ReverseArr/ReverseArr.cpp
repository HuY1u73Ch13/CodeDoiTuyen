#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,b[10000005];
int main ()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ReverseArr.Inp","r",stdin);
    freopen("ReverseArr.Out","w",stdout);

    cin>>a;
    for (int i=1;i<=a;i++)
    {
        cin>>b[i];
    }
    reverse(b+1,b+1+a);
    for (int i=1;i<=a;i++)
        cout<<b[i]<<" ";

}
