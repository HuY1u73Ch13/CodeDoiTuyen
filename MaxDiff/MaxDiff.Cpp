#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,b,c,d,x,y;
int main ()

{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MaxDiff.Inp","r",stdin);
    freopen("MaxDiff.Out","w",stdout);
    cin>>a>>b>>c>>d;
    cout<<min({abs(a-c),abs(a-d),abs(b-c),abs(b-d)});


}


