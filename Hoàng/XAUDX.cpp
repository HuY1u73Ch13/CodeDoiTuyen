#include<bits/stdc++.h>
#define N 100000
#define ll long long
using namespace std ;
string s;
ll f[N],d(0);
int main ()
{
    freopen("XAUDX.inp","r",stdin);
    freopen("XAUDX.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        f[s[i]]++;
    }
    for(int i='a';i<='z';i++)
    {
        //cout<<f[i]<<" ";
        if(f[i]%2!=0) d++;
    }
    if(d>0) cout<<d-1;
    else cout<<0;

}