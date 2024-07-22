#include<bits/stdc++.h>
#define N 1000000
#define ll long long
using namespace std ;
string n,m;
ll f[N],d[N],kq(0);
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("conan.inp","r",stdin);
    freopen("conan.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n.size();i++)
    {
        f[n[i]]++;
    }
    for(int i=0;i<m.size();i++)
    {
        d[m[i]]++;
    }
    for(int i='a';i<='z';i++)
    {
        //cout<<f[i]<<" "<<d[i]<<'\n';
        if(f[i]>0 or d[i]>0){kq+=min(f[i],d[i]);}
    }
    cout<<kq;
}