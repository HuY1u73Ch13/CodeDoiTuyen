#include<bits/stdc++.h>
#define ll long long
#define N 10000001
using namespace std ;
bool NT[N+5];
ll a,s=0;
void sang()
{
    fill(NT+1,NT+N,true);
    NT[0]=NT[1]=false;
    for(int i=1;i<=sqrt(N);i++)
        if(NT[i])
        for(int j=i*i;j<=N;j=j+i)
        NT[j]=false;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("timso.inp","r",stdin);
    freopen("timso.out","w",stdout);
    sang();
    ll a,b(0),s=0,n;
    cin>>a;
    for(int i=1;i<=N;i++)
    {
        if(NT[i]) {cout<<i;b++;}
        if(b==a) break;
    }
}