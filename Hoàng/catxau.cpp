#include<bits/stdc++.h>
#define ll long long
#define N 100000
using namespace std ;
ll f[N],kq=1;
string s;
int main ()
{
    freopen("catxau.inp","r",stdin);
    freopen("catxau.out","w",stdout);
    memset(f,0,sizeof(f));        
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(f[s[i]]==0)
        {
            f[s[i]]++;
        }
        else
        {
            kq++;
            memset(f,0,sizeof(f));
            f[s[i]]++;        
        }
    }
    cout<<kq;
}