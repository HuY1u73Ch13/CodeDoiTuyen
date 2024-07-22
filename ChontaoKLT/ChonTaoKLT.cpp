#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,b[100005],d[4],s=0,x;
int main ()
{
    freopen("ChonTaoKLT.Inp","r",stdin);
    freopen("ChonTaoKLT.Out","w",stdout);
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b[i];
         b[i]=b[i]%3;
         s=s+b[i];
         x=b[i];
         d[x]++;
    }
    if(s%3==0)
        cout<<a;
    if(s%3==1)
    {
        if(d[1]>=1)
        cout<<a-1;
        else
            cout<<a-2;
    }
    if(s%3==2)
    {
        for(int i=1;i<=a;i++)
        {
            if(b[i]%3==2)
            {
                cout<<a-1;
                return 0;
            }

        }
        cout<<a-2;
    }

}


