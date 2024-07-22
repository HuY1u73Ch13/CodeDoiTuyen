#include <bits/stdc++.h>
#define maxn 1000001
using namespace std;
int a[maxn];
long long s[maxn],ans=0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;s[0]=0;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
        s[i] = s[i-1] +a[i];
    }
    for(int i=0;i<=m;++i)
    {
        long long T = s[i]+s[n]-s[n-(m-i)];
        ans = max(ans,T);
    }
    cout << ans;
}