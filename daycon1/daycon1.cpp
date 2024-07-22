#include<bits/stdc++.h>
#define ll long long
using namespace std ;
string a,s="";
int main ()
{
    //freopen("daycon1.Inp","r",stdin);
    //freopen("daycon1.Out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=' ') s=s+a[i];
        else
        {
            cout<<s<<"\n";
            s="";
        }
    }
}
