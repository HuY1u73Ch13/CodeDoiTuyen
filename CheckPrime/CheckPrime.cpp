#include<bits/stdc++.h>
#define ll long long
using namespace std ;
string x,y;
ll i,u,v;
int main ()
{
   cin>>x;
   cin>>y;
   for (i=0;i<=x.size();i++)
   if (x[i]=='a') u++;
   for (i=0;i<=y.size();i++)
   if (y[i]=='a') v++;
   if (u==0) cout<<"NO"<<endl;
   else
    cout<<"YES"<<endl;
   if (v==0) cout<<"NO"<<endl;
   else
    cout<<"YES"<<endl;


}
