#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,i,b[1000005],x;
int main ()
{
    cin>>a;
    for ( i=1;i<=a;i++)
    {
        cin>>b[i];


    }
    sort(b+1,b+1+a);
    for ( i=1;i<=a;i++)
        cout<<b[i]<<" ";
}
