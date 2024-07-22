#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    long long a;
    cin>>a;
    if (a==15000000)
        cout<<a-(a*30/100);
    if (a>=7000000 and a<15000000)
        cout<<a-(a*20/100);
    if (a<7000000)
        cout<<a-(a*10/100);
}
