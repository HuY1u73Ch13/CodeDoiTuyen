#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std ;
ll a,b[N],kq(0),s(0);
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DDELETE.inp","r",stdin);
    freopen("DDELETE.out","w",stdout);
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b[i];s+=b[i];
    }
    for(int i=1;i<a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i<j)
            {
                //cout<<b[i]<<" "<<b[j]<<'\n';
                s=s-(b[i]+b[j]);
                if(s%2==0)
                {
                    kq++;
                    //cout<<b[i]<<" "<<b[j]<<'\n';
                }
            }
        }

    }
    cout<<kq;
}