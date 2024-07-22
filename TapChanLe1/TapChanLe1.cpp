#include<bits/stdc++.h>
using namespace std ;
long long a;
int main ()
{
    freopen("TapChanLe1.Inp ","r",stdin);
    freopen("TapChanLe1.Out","w",stdout);
    cin>>a;
    for(int i=1;i<=a;i=i+2)
        cout<<i<<" ";
    cout<<endl;
    for(int i=2;i<=a;i=i+2)
        cout<<i<<" ";
}
