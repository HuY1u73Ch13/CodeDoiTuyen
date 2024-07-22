#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll u,x,k,s[1000005],res,g,d1,c1;
int main ()
{
    freopen("dish.inp","r",stdin);
    freopen("dish.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>u>>x;
    for(int i=1;i<=u;i++)
    {
        cin>>k;
        s[i]=s[i-1]+k;
    }
    res=u+1;
    for(int r=1;r<=u;r++)
    {
        ll d=1,c=r;
        while(d<=c)
        {
            g=(d+c)/2;
            if(s[r]-s[g-1]>=x)
            {
                res=min(res,r-g+1);d1=g;c1=r;
                d=g+1;
            }
            else c=g-1;
        }
    }
    if(res==u+1) cout<<-1;
    else cout<<d1<<" "<<c1;
}