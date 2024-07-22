#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x=0,y=0;
bool check(ll a, ll b, ll x, ll y)
{
    ll s;
    s=(x-a)*(x-a)+(y-b)*(y-b);
    if(s<=2) return true;
    else return false;
}
int main()
{
    freopen("spy.inp","r",stdin);
    freopen("spy.out","w",stdout);
    ll a,b,len,i,canh=0,k=-1;
    cin>>a>>b>>len;
    ll spy[len];
    fill(spy,spy+len,-1);
    string s;
    cin>>s;
    if(check(a,b,x,y)) k=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='D')
        {
            y=y-1;
            if(check(a,b,x,y))
            {
                canh++;
                spy[i]=i+1;
            }
        }
        if(s[i]=='U')
        {
            y=y+1;
            if(check(a,b,x,y))
            {
                canh++;
                spy[i]=i+1;
            }
        }
        if(s[i]=='L')
        {
            x=x-1;
            if(check(a,b,x,y))
            {
                canh++;
                spy[i]=i+1;
            }
        }
        if(s[i]=='R')
        {
            x=x+1;
            if(check(a,b,x,y))
            {
                canh++;
                spy[i]=i+1;
            }
        }
    }
    if(canh==0) cout<<"-1";
    else
    {
        if(k==0) cout<<k<<'\n';
        for(i=0;i<len;i++)
            {
                if(spy[i]>-1) cout<<spy[i]<<'\n';
            }
    }
}
