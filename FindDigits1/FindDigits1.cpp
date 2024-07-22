#include<bits/stdc++.h>
using namespace std ;
int x,j,i,dem=0;
int main ()
{

    //freopen("FindDigits1.Inp","r",stdin);
    //freopen("FindDigits1.Out","w",stdout);
    cin>>x;
    for (i=0;i<=9;i++)
    {
        for (j=0;j<=9;j++)
        {
            if ((2021020210+i*1000000+j)%x==0)
                dem++;
        }
    }
    cout<<dem;
}
