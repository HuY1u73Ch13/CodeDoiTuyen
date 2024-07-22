#include<bits/stdc++.h>
#define ll long long
#define N 100001
using namespace std ;
ll L[N],R[N];
ll n,m;
using namespace std;
int main()
{
    freopen("chupanh.inp","r",stdin);
    freopen("chupanh.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        L[i]=i-1;
        R[i]=i+1;
    }
    R[n]=0;
    for(int k=1;k<=m;k++)
    {
        ll i,j;
        cin>>i>>j;
        // xoa phan tu thu i
        R[L[i]]=R[i];
        L[R[i]]=L[i];
        // chen phan tu thu i vao ben trai phan tu j
        R[L[j]]=i;
        L[i]=L[j];
        R[i]=j;
        L[j]=i;
    }
    for(int i=1;i<=n;i++)
        cout<<L[i]<<" "<<R[i]<<"\n";
     return 0;
}
