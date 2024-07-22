#include<bits/stdc++.h>
using namespace std ;
string a;
long long s=0,dem=0,e=0;
int main ()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("Countabc.Inp","r",stdin);
    //freopen("Countabc.Out","w",stdout);
    getline(cin,a);
    for(int i=0;i<a.size();i++)
    {
        if (a[i]=='a') dem=dem+1;
        if (a[i]=='b') s=s+1;
        if (a[i]=='c') e=e+1;

    }
    cout<<dem<<endl;
    cout<<s<<endl;
    cout<<e<<endl;
}
