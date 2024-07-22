#include<bits/stdc++.h>
#define ll long long
using namespace std ;
long double a,s(0),mn=0,kq=0,r,h;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("noivong.inp","r",stdin);
    freopen("noivong.out","w",stdout);
    cin>>a;
    while(a--)
    {
        cin>>r>>h;
        s=3.141592653589793*r*r*h;
        if(s>mn) {kq+=s;mn=s;s=0;}
        else s=0;
    }
    cout<<fixed<<setprecision(3)<<(long double)kq;
}