#include<bits/stdc++.h>
using namespace std ;
long long a;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TapChanLe2.Inp","r",stdin);
    freopen("TapChanLe2.Out","w",stdout);
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i%2==1)
        cout<<i<<" ";
    }
    cout<<endl;
    for(int j=a;j>=1;j--)
    {
        if(j%2==0)
         cout<<j<<" ";
    }

}
