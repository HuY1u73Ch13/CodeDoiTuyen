#include <bits/stdc++.h>
#define N 10001
using namespace std;
int n, res=0;
string s;
bool check(int x)
{
    for (int i=0; i<n-x+1; i++)
    {
        string s1=s.substr(i,x);
        int t1=s.find(s1,0);
        int t2=s.rfind(s1,n-1);
        if (t1 != t2) return 0;
    }

    return 1;
}
int main()
{
    freopen("diffsstr.inp", "r", stdin);
    freopen("diffsstr.out", "w", stdout);
    cin>>n;
    cin>>s;
    int l=1, r=n;
    while (l<=r)
    {
        int g=(l+r)/2;
        if (check(g))
        {
            res=g;
            r=g-1;
        }
        else l=g+1;
    }
    cout<<res;
    return 0;
}
