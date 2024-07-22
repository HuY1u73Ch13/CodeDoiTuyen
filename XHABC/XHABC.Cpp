#include<bits/stdc++.h>
using namespace std ;
string s;
int a,b,c;
int main ()
{
    cin>>s;
    for (int i=1;i<=s.size();i++)
    {
        if (s[i]=='a') a++;
        if (s[i]=='b') b++;
        if (s[i]=='c') c++;
    }
    if (a>b and a>c) cout<<a<<" "<<"a";
    if (b>c and b>a) cout<<b<<" "<<"b";
    if (c>a and c>b) cout<<a<<" "<<"c";
}


