#include<bits/stdc++.h>
#define ll long long
#define N 100005
using namespace std ;
pair <int,int> d[N];
ll f[N],z(0);
string s;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("matma.inp","r",stdin);
    freopen("matma.out","w",stdout);
    while(cin>>s)
    {
        for(int i=0;i<s.size();i++) f[s[i]-'A'+1]++;
    }
    for(int i=1;i<='Z'-'A'+1;i++)
    {
        if(f[i]!=0)
        {
            d[++z].first=f[i];
            d[z].second=i;
        }
    }
    sort(d+1,d+z+1);
    for(int i=1;i<=4;i++)
    {
        swap(d[i].first,d[i].second);
    }
    sort(d+1,d+4+1);
    for(int i=1;i<=4;i++)
    {
        cout<<d[i].second;
    }
}