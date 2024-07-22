#include<bits/stdc++.h>
#define ll long long
using namespace std ;
float ch;
int w,h,c,n;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sibice.inp","r",stdin);
    freopen("sibice.out","w",stdout);
    cin>>n>>w>>h;
    ch=sqrt(w*w+h*h);//cout<<ch<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>c;
        if(c<=ch) cout<<"DA"<<'\n';
        else cout<<"NE"<<'\n';
    }
}