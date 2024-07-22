#include <bits/stdc++.h>
using namespace std;
int a,b,i,s(0);
int tt(int k)
{
    int sum(1);
    for (int i=2;i<=sqrt(k);i++)
    {
        if (k%i==0)
        {
            sum+=i;
            if (i*i!=k) sum+=k/i;
        }
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sophongphu.inp","r",stdin);
    freopen("sophongphu.out","w",stdout);
    cin>>a>>b;
    for (i=a;i<=b;i++)
    {
        if (tt(i)>i) s++;
    }
    cout<<s;
}
