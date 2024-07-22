#include<bits/stdc++.h>
#define ll long long
using namespace std ;
string s,t;
ll i,k;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CENSOR.inp","r",stdin);
    freopen("CENSOR.out","w",stdout);
    cin>>s>>t;
    while(s.find(t)!=-1)
    {
        s.erase(s.find(t),t.size());
    }
    cout<<s;
}