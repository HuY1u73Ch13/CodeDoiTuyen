#include <bits/stdc++.h>
#define N 50001
using namespace std;
int a[N];
int n, k,res;
int tknp(int x, int d1, int c1)
{
    int res1;
    while(d1<=c1)
    {
        int g1=(d1+c1)/2;
        if(a[g1]<=x)
        {
            res1=g1;
            d1=g1+1;
        }
        else c1=g1-1;
    }
    return res1;

}
bool check(int g)
{
    int i=1, dem=0;
    while(i<=n)
    {
        int j=tknp(a[i]+2*g,i,n);
        dem++;
        i=j+1;
    }
    return dem<=k;
}
int main()
{
    //freopen("angry.inp","r",stdin);
    //freopen("angry.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    int d=1, c=a[n]/2+1;
    while(d<=c)
    {
        int g=(d+c)/2;
        if(check(g))
        {
            res=g;
            c=g-1;
        }
        else d=g+1;
    }
    cout<<res;
    return 0;
}
