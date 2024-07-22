#include<bits/stdc++.h>
using namespace std ;
string a;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("EraseSt1.Inp","r",stdin);
    freopen("EraseSt1.Out","w",stdout);
    getline(cin,a);
    a=a.erase(0,3);
    cout<<a;
}


