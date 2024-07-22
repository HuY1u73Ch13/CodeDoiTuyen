#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s1,s;
ll n,kq(0);
bool kt(int vtd,string a,string b)
{
    for(int i=vtd+1;i<b.size()-a.size()+1;i++)
    {
        string m=b.substr(i,a.size());
//        cerr<<m<<" ";
//        cout<<i<<" "<<a.size()<<" "<<m<<endl;
        if(a==m) return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("xau.inp","r",stdin);
    freopen("xau.out","w",stdout);
    cin>>n>>s;
    ll d=0,c=n,g;
    while(d<=c)
    {
        g=(d+c)/2;
//        cout<<g<<endl;
        bool ok;
        for(int vtd=0;vtd<s.size()-g+1;vtd++)
        {
            ok=false;
            s1=s.substr(vtd,g);
//            cout<<vtd<<" "<<vtd+g-1<<" "<<s1<<endl;

            if(kt(vtd,s1,s) == true) {ok=true;break;}
        }
        if(ok==true) {kq=g;d=g+1;}
        else c=g-1;
    }
    cout<<kq;
}