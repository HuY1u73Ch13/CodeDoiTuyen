#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll n,ans=0;
string s,b;
int main ()
{
    freopen("ChuoiHat.Inp","r",stdin);
    freopen("ChuoiHat.Out","w",stdout);
    cin>>n;
    cin>>s;
    b=s;
    reverse(b.begin(),b.end());
    if(b==s) ans++;
    for(int i=1;i<=n-1;i++)
    {
        s=s+s[0];
        s.erase(0,1);
        b=s;
        reverse(b.begin(),b.end());
        if(b==s) ans++;
    }
    cout<<ans;

}

