#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll n,c(0),l(0),k;
int main ()
{
    freopen("tongchan.inp","r",stdin);
    freopen("tongchan.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        if(k%2==0) c++;
        else l++;
    }
    if(l%2==0) cout<<(l*(l-1))/2+(c*(c-1))/2;
    else cout<<l*c;
}