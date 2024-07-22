#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,s,i=9;
int main ()
{
    freopen("PASSWORD.inp","r",stdin);
    freopen("PASSWORD.out","w",stdout);
    cin>>a>>s;
    while(a--)
    {
        if(s>i){s-=i;cout<<i;}
        else i--;

    }
}
