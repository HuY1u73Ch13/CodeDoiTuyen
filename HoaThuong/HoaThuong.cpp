#include<bits/stdc++.h>
using namespace std ;
string hoa,thuong,a;
int main ()
{
    freopen("HoaThuong.Inp","r",stdin);
    freopen("HoaThuong.Out","w",stdout);
    cin>>a;
    hoa=thuong="";
    for(int i=0;i<a.size();i++)
    {
        if (a[i]>='a' and a[i]<='z')
        {
            thuong=thuong+a[i];
            hoa=hoa+char(a[i]-'a'+'A');
        }
        else
        {
            hoa=hoa+a[i];
            thuong=thuong+char(a[i]-'A'+'a');
        }
    }


    cout<<hoa<<endl;
    cout<<thuong;
}
