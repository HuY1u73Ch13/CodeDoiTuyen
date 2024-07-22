#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll i;
string a,s,b,dem;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Ispalindrome.Inp","r",stdin);
    freopen("Ispalindrome.Out","w",stdout);
    cin>>a;
    for (i=a.size()-1;i>=0;i--)
        s=s+a[i];
    if (s==a)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    cin>>b;
    for (i=b.size()-1;i>=0;i--)
        dem=dem+b[i];
    if (dem==b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
