#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,b,s=0,d,i,j,c;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("NumPrimeInSeg.Inp","r",stdin);
    freopen("NumPrimeInSeg.Out","w",stdout);
    cin>>c;
    while(c--)
    {
        d=0;
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
        s=0;
        for(j=1;j<=b;j++)
        {
            if(i%j==0)
            {
                s=s+j;
            }
        }
        if(s==i+1) d++;
        }
        cout<<d;
        cout<<endl;
    }
}


