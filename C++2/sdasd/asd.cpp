#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,b,c,d,s=0;
int main ()
{
    cin>>a;
    cin>>b;
    c=int(a);
    d=int(b);
    for (int i=c;i<=d;i++)
    {
        if(i%1==0)
        s=s+1;
    }
    cout<<s;



}

