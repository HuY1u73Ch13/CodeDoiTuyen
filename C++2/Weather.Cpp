#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    long long a;
    cin>>a;
    a=a%4;
    if (a==1) cout<<"SUNNY";
    if (a==2) cout<<"CLOUDY";
    if (a==3) cout<<"WINDY";
    if (a==4) cout<<"RAINY";

}
