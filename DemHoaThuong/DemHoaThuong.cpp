#include<bits/stdc++.h>
#define ll long long
using namespace std ;
string  a;
ll s,d;
int main ()
{
    freopen("DemHoaThuong.Inp","r",stdin);
    freopen("DemHoaThuong.Out","w",stdout);
    cin>>a;
    for (int i=0;i<a.size();i++)
        if (a[i]>='A' and a[i]<='Z') s++;
        else if (a[i]>='a' and a[i]<='z') d++;
    cout<<s<<endl;
    cout<<d;
}
