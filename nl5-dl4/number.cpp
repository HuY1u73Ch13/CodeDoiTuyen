#include<bits/stdc++.h>
#define ll long long
using namespace std ;
string s;
ll k,n;
int main ()
{
    freopen("number.inp","r",stdin);
    freopen("number.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k>>s;
    ll d=n-k;
    ll vt,vtd=0,vtc=n-d;
    for(int i=0;i<d;i++)
    {
        vt=vtd;
        for(int j=vtd;j<=vtc;j++)
        {
            if(s[vt]<s[j]) vt=j;
        }
        cout<<s[vt];
        vtd=vt+1;
        vtc=vtc+1;
    }
}