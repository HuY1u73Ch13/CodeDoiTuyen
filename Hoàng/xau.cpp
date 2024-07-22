#include<bits/stdc++.h>
#define ll long long
#define N 1000
using namespace std ;
string n,m;
ll f[N],d[N],s(0),d1(0),kq(0);
bool ok;
int main ()
{
    freopen("xau.inp","r",stdin);
    freopen("xau.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n.size();i++)
    {
        f[n[i]]++;
    }
    //for(int i='a';i<='z';i++) cout<<i<<" "<<f[i]<<'\n';
    for(int vt=n.size()-1;vt<m.size();vt++)
    {
        memset(d,0,sizeof(d));
        ok=true;
        for(int i=vt-n.size()+1;i<=vt;i++)
        {
            d[m[i]]++;
        }
//        //cout<<vt-n.size()+1<<" "<<vt<<'\n';
//        for(int i='a';i<='z';i++)
//        {
//            if(d[i]!=0) cout<<i<<" "<<d[i]<<"\n";
//        }
        for(int i='a';i<='z';i++)
        {
            if(f[i]!=d[i])
            {
                ok=false;break;
            }
        }
        if(ok==true) kq++;
     }
    cout<<kq;
}