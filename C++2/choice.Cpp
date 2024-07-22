#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a,b;

    freopen("Choice.Inp","r", stdin);
    freopen("choice.Out","w", stdout);
    cin>>a>>b;
    if (a==1 and b==2 ) cout<<3;
    if (a==1 and b==3 ) cout<<2;
    if (a==2 and b==1 ) cout<<3;
    if (a==2 and b==3 ) cout<<1;
    if (a==3 and b==2 ) cout<<1;
    if (a==3 and b==1 ) cout<<2;
}
