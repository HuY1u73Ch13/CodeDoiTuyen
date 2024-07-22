#include<bits/stdc++.h>
using namespace std ;
string a;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("EraseSt2.Inp","r",stdin);
    freopen("EraseSt2.Out","w",stdout);
    cin>>a;
    cout<<a.erase(a.length()-3,3);

}
