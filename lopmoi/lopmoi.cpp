#include<bits/stdc++.h>
using namespace std ;
long long a,s=1,k=1;
int main ()

{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a;
    if (a==1 or a==0)
    {
        cout<<"0";
        return 0;
    }
    if (a==2)
    {
        cout<<"1";
        return 0;
    }
    for (int i=1;i<=a;i++)
    {
        s=s*i;
    }
    for (int i=1;i<=a-2;i++)
    {
        k=k*i;

    }
    cout<<s/(k*2);

}
