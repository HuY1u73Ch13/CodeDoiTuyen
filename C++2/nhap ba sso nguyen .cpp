#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    long long a,b,c,mx,mn,t;
    cin>>a>>b>>c;
    mx=max(a,max(b,c));
    mn=min(a,min(b,c));
    t=a+b+c;
    cout<<mx<<" "<<t-mx-mn<<" "<<mn;

}
