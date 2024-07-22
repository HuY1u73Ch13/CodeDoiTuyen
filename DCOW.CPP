#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,b[1000005],s=0;
int main ()
{
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b[i];
    }
    for(int k=1;k<a;k++)
    {
        for(int j=k+1;j<=a;j++)
        {
           if(b[k]==b[j])
           s++;
        }
    }
    cout<<s;
}

