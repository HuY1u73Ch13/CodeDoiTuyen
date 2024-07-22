#include<bits/stdc++.h>
#define ll long long
#define N 10005
using namespace std ;
ll n,a[N],s(0);
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("quen.inp","r",stdin);
    freopen("quen.out","w",stdout);
    cin>>n;
    int m=n-1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }


    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
            bool ok=true;
            if(i+1<j)
            {
                for(int k=i+1;k<j;k++)
                {
                    if(a[k]>a[i] || a[k]>a[j]) ok=false;
                }
                if(ok) s++;
            }
        }
    }
    cout<<s+m;
}