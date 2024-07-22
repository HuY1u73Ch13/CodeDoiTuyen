#include <bits/stdc++.h>
#define ll long long
#define name "HUMBERGER"
using namespace std;
ll nb,ns,nc,pb,ps,pc,r,m,B,S,c,d,k,ans,g,C;
string x;
bool check(ll g)
{
    ll Q,W,E;
    Q=g*B;
    W=g*S;
    E=g*C;

    Q=nb-Q;
    W=ns-W;
    E=nc-E;

    Q=min(Q,0LL);
    W=min(W,0LL);
    E=min(E,0LL);
    if (r-abs(Q)*pb-abs(W)*ps-abs(E)*pc>=0) return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(name".INP","r",stdin);
    freopen(name".OUT","w",stdout);
    cin>>x;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    m=0;
    for (int i=0;i<x.size();i++)
    {
        if (x[i]=='B')
        {
            B++;
            m+=pb;
        }
        if (x[i]=='S')
        {
            S++;
            m+=ps;
        }
        if (x[i]=='C')
        {
            C++;
            m+=pc;
        }
    }
    d=0;
    c=r/m + max(max(nb,nc),ns);
    while(d<=c)
    {
        g=(d+c)/2;
        if (check(g))
        {
            ans=g;
            d=g+1;
        }
        else
            c=g-1;
    }
    cout<<ans;
    return 0;
}
