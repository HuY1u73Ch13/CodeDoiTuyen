#include<bits/stdc++.h>
#define N 1000000
#define ll long long
using namespace std ;
ll k;
string s;
int main ()
{
    freopen("xaumin.inp","r",stdin);
    freopen("xaumin.out","w",stdout);
    cin>>k>>s;
    ll vt,vtd=0,vtc=s.size()-k;
    for(int i=1;i<=k;i++)
    {
        vt=vtd;
        for(int j=vtd;j<=vtc;j++)
        {
            if(s[vt]>s[j]) vt=j;
        }
        cout<<s[vt];
        vtd=vt+1;
        vtc=vtc+1;
    }
}