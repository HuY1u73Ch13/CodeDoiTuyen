#include<bits/stdc++.h>
using namespace std ;
int main ()
{

    int sx,ST,n;
    freopen("HatCuom.Inp","r",stdin);
    freopen("HatCuom.Out","w",stdout);
    string st;
    cin>>n;
    cin>>st;
    sx=0;
    ST=0;
    for (int i = 0; i <=n-1;i++)
        if (st[i]=='X') sx++;
        else ST++;
    for (int i=1;i<=sx;i++) cout<<'X';
    for (int i=1;i<=ST;i++) cout<<"T";

}

