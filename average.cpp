#include <bits/stdc++.h>
#define N 10005
#define ll long long
using namespace std;
int a[N];
ll b[N];
int n, k, res;
bool check(int g)
{
    for (int i=1; i<=n; i++)
        b[i]=b[i-1]+a[i]-g;
    ll min_val=0;
    for (int i=k; i<=n; i++)
    {
        if (b[i]-min_val>=0) return 1;
        min_val=min(min_val,b[i-k+1]);
    }
    return 0;
}
int main()
{
    freopen("average.inp","r", stdin);
    freopen("average.out","w", stdout);
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i]=a[i]*10000;
    }
    int d=*min_element(a+1,a+n+1);
    int c=*max_element(a+1,a+n+1);
    while (d<=c)
    {
        int g=(d+c)/2;
        if (check(g))
        {
            res=g;
            d=g+1;
        }
        else c=g-1;
    }
    cout<<setprecision(3)<<fixed;
    cout<<res/10000.0;
    return 0;
}
