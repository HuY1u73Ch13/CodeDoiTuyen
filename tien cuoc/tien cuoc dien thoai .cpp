#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a,phicodinh;
    phicodinh=25000;

    cin>>a;
    if (a<=50) cout<<phicodinh + 600*a;
    else if (a>50 and a<150) cout<<phicodinh+50*600+(a-50)*400;
    else if (a>=150) cout<<phicodinh+50*600+(a-50)*400;
    else if (a>=200) cout<<phicodinh+50*600+150*400+(a-200)*200;
}


