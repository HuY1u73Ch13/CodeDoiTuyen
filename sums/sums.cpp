#include<bits/stdc++.h>
#define N 100000
#define ll long long
using namespace std ;
ll n,s,a[N],F[N],vet[N];
int main ()
{
    //freopen("sum.inp","r",stdin)
    //freopen("sum.uot","w",stdout)
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    F[0]=1;
    for(int i=1;i<=n;i++)
    for(int j=s;j>=a[i];j--)
        if(F[j-a[i]]==1)
        {
            F[i]=1;
            if(vet[j==0]) vet[j]=i;
        }
    if(F[s]==0)
        cout<<"NO";
    else
    {
        vector <int> kq;
        cout<<"YES"<<'\n';
        int i=s;
        while(i>0)
        {
            kq.push_back(vet[i]);
            i=i-a[vet[i]];
        }
        for(int j=kq.size()-1;j>=0;j--) cout<<kq[j]<<" ";
    }
    return 0;
}
