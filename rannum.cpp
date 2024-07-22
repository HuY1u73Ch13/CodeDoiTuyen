#include <bits/stdc++.h>
#define ll long long
#define FOR(a,b) for (int i=(a);i<=(b);i++)
using namespace std;
ll n,f[1000005],k,s(0);
int main()
{
    memset(f,0,sizeof(f));
    cin>>n;
    FOR(1,n)
    {
        cin>>k;
        f[k]++;
    }
    FOR(1,n) s+=f[i]/i;
    cout<<s;
}



10
5 1 2 5 5 2 5 5 2 2    
1 4 0 0 5