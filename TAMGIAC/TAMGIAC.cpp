#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll n,can(0),deu(0),vuong(0),A1,B1,C1;
ld xa,xb,xc,ya,yb,yc,A,B,C;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TAMGIAC.DAT","r",stdin);
    freopen("TAMGIAC.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        A=sqrt((xb-xc)*(xb-xc) + (yb-yc)*(yb-yc));
        B=sqrt((xa-xc)*(xa-xc) + (ya-yc)*(ya-yc));
        C=sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
        A1=(xb-xc)*(xb-xc) + (yb-yc)*(yb-yc);
        B1=(xa-xc)*(xa-xc) + (ya-yc)*(ya-yc);
        C1=(xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
        if (A==B && B==C) deu++;
        else
            if (A==B || B==C || A==C) can++;
        if (A1==B1+C1 || B1==A1+C1 || C1==A1+B1)
                    vuong++;
        //cout<<A1<<" "<<B1<<" "<<C1<<"\n";
    }
    cout<<"DEU : "<<deu<<"\n"<<"CAN :"<<can<<"\n"<<"VUONG : "<<vuong;
}

