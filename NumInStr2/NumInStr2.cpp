#include<bits/stdc++.h>
using namespace std ;
string a;
int s=0,x=0;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("NumInStr2.Inp","r",stdin);
    //freopen("NumInStr2.Out","w",stdout);
    cin>>a;
    for (int i=0;i<=a.size();i++)
    {
        if ('0'<=a[i] and a[i]<='9')
            x=x*10+a[i]-'0';
        else
        {
            s=s+x;
            x=0;
        }
    }
    s=s+x;
    cout<<s;

}
