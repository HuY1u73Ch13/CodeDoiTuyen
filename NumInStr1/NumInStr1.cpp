#include<bits/stdc++.h>
using namespace std ;
string s;
int dem=0;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("NumInStr1.Inp","r",stdin);
    freopen("NumInStr1.Out","w",stdout);
    cin>>s;
    for(int i=0;i<s.size();i++)
    if ('0'<=s[i] and s[i]<='9')
        dem=dem+s[i]-48;
    cout<<dem;


}


