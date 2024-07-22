#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a,s=0;
    cout<<"nhap vao tong doanh so : ";
    cin>>a;
    if (a<=100000000) cout<<a*5/100;
    else if (a<=300000000) cout<<a*10/100;
    else if (a>300000000)  cout<<a*20/100;
}
