#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  a,s=0;
    cin>>a;
    for(int i=0;i<=a;i++)
    if (a%i==0)
       s=s+i;

    if (s==2)
        cout<<"YES";
    else
        cout<<"NO";



}
