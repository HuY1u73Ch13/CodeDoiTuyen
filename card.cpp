#include <bits/stdc++.h>
#define N 1000001
using namespace std;
int L[N], R[N];
int n, k;
string s;
int main()
{
    freopen("card.inp","r", stdin);
    freopen("card.out","w", stdout);
    cin>>n>>k>>s;
    for (int i=1; i<=n; i++)
    {
        L[i]=i-1;
        R[i]=i+1;
    }
    R[0]=1; L[n+1]=n;
    for (int i=0; i<s.size()-1; i++)
    {
        int p;
        if (s[i]=='A') p=R[0];
        if (s[i]=='B') p=R[R[0]];

        R[L[p]]=R[p];
        L[R[p]]=L[p];

        int x;
        x=L[n+1];

        L[p]=x;
        R[p]=n+1;
        R[x]=p;
        L[n+1]=p;
    }
    int p=R[0];
    for (int i=1; i<=k; i++) p=R[p];
    cout<<L[p]-1<<" "<<p-1<<" "<<R[p]-1;
    return 0;
}
