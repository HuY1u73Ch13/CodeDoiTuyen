#include <bits/stdc++.h>
#define ll long long
#define name "DANCING"
using namespace std;
int n,nam[100005],am[100005],duong[100005],ans,a,z,k,amm,dg;
int timd(int x,int c)
{
    int d=1,g,kq=-1;
    c--;
    while(d<=c)
    {
        g=(d+c)/2;
        if (duong[g]<x)
        {
            kq=g;
            d=g+1;
        }
        else
            c=g-1;
    }
    return kq;
}
int tima(int x,int d)
{
    int c=z,g,kq=-1;
    d++;
    while(d<=c)
    {
        g=(d+c)/2;
        if (am[g]>x)
        {
            kq=g;
            c=g-1;
        }
        else
            d=g+1;
    }
    return kq;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen(name".INP","r",stdin);
    //freopen(name".OUT","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>nam[i];
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        if (a<0) am[++z]=abs(a);
        else
            duong[++k]=a;
    }
    sort(am+1,am+1+z);
    sort(duong+1,duong+1+k);
    sort(nam+1,nam+1+n);
    amm=k+1;
    dg=0;
    for (int i=1;i<=n;i++)
    {
        if (nam[i]<0)
        {
            if (amm!=-1) amm=timd(abs(nam[i]),amm);
            if (amm!=-1) ans++;
        }
        else
        {
            if (dg!=-1) dg=tima(nam[i],dg);
            if (dg!=-1) ans++;
        }
    }
    cout<<ans;
}
