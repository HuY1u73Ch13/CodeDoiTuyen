#pragma GCC optmize("O2")
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,x,mn=-1e18,mx=-1e18;
int main ()

{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("MaxEven.Inp","r",stdin);
     freopen("MaxEven.Out","w",stdout);
     cin>>a;
     for(int i=1;i<=a;i++)
     {
         cin>>x;
         if(x%2==0)
         mn=max(mn,x);
     }
     if(mn==-1e18)
        cout<<"IMPOSSIBLE";
     else
        cout<<mn;


}

