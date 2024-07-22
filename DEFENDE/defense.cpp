#include<bits/stdc++.h>
#define N 1002
#define inf 9999999999
#define ll long long
using namespace std ;
ll a[N],F[N],n;
int main ()
{
    freopen("defense.inp","r",stdin);
    freopen("defense.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    a[0]=-inf;a[n+1]=inf;
    F[0]=1;
    for(int i=1;i<=n+1;i++)
    for(int j=0;j<=i-1;j++)
    {
        //if(a[i]>a[j] and F[i]<F[j]+1) F[i]=F[j]+1;
        if(a[i]>a[j]) F[i]=max(F[i],F[j]+1);
    }
    cout<<F[n+1]-2<<'\n';
    ll i=n+1;
    vector<int> kq;
    while(i>0)
    {
        for(int j=0;j<=i-1;j++)
            if(a[i]>a[j] and F[j]+1==F[i])
            {
                i=j;
                kq.push_back(a[i]);
                break;
            }
    }
    for(int i=kq.size()-2;i>=0;i--)
        cout<<kq[i]<<" ";
    return 0;
}
