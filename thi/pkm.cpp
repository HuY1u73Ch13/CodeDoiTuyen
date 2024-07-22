#include<bits/stdc++.H>
#define ll long long
#define N 1000005
using namespace std ;
ll m,k,r,z(0),t,f[N],kq(0),mn=0;
float s(0);
string d,kqc;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("pkm.inp","r",stdin);
    freopen("pkm.out","w",stdout);
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>d>>m>>k>>r;
        if(k>m) f[++z]=0;
        else
        {
            for(int i=0;i<=sqrt(N);i++)
            {
                s=k*i+r*i;
                if(s>m)
                {
                    f[++z]=i;
                    break;
                }
            }
        }
        if(s>mn) {kqc=d;mn=s;}
    }
    for(int i=1;i<=z;i++)
    {
        cout<<f[i]<<" ";
        kq+=f[i];
    }
    cout<<'\n'<<kq<<'\n'<<kqc;
}