#include<bits/stdc++.h>
#define ll long long
using namespace std ;
string a,d="";
ll k;
int main ()
{
    freopen("giainen.inp","r",stdin);
    freopen("giainen.out","w",stdout);
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        char c;
        if(a[i]>='0' && a[i]<='9')
        {
            for(i;i<a.size();i++)
            {
                if(a[i]>='0' && a[i]<='9') k=k*10+a[i]-48;
                else {c=a[i];break;}
            }
            //cout<<d<<" ";
            //cout<<k<<" "<<c<<'\n';
            for(int j=1;j<=k;j++)
            {
                cout<<c;
            }
            k=0;
        }
        else cout<<a[i];
    }
}