#pragma GCC target ("avx2")
#pragma GCC optimze ("02")
#pragma GCC optimize ("unroll-loops")
#include<bits/stdc++.h>
#define ll long long
#define N 100005
using namespace std;
ll m,n,k,f[N],b,a,s(0);
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)
    {
        cin>>a;
        f[a]++;
    }
    for(int i=1;i<=k;i++)
    {
        cin>>b;
        for(int j=1;<=n;i++)
        {
            if(f[i]<=b) {s++;}
        }
        cout<<s<<'\n';
        s=0;
    }
}