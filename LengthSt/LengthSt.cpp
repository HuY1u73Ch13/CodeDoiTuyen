#include<bits/stdc++.h>
using namespace std ;
string x,y,z,kq;
int main ()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("LengthSt.Inp","r",stdin);
    freopen("LengthSt.Out","w",stdout);
    cin>>x>>y>>z;
    kq=x;
    if (y.length()>kq.length()) kq =y;
    if (z.length()>kq.length()) kq=z;
    cout<<kq;
}
