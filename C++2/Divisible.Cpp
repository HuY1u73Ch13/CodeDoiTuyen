#include<bits/stdc++.h>
using namespace std ;
int a;
int main ()

{
    reopen("Divisible.Inp","r",stdin);
    freopen("Divisible.Out","w",stdout);
    cin>>a;
    if (a%2==0)
        cout<<a;
    else
        cout<<a*2;

}
