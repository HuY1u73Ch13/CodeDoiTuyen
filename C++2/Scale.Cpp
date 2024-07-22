#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   long long a,b,c,s=0;
   freopen("Scale.Inp","r", stdin);
   freopen("scale.Out","w", stdout);
   cin>>a>>b>>c;
   if (a+b==c) s=s+1;
   if (a+c==b) s=s+1;
   if (b+c==a) s=s+1;
   if (a==b)   s=s+1;
   if (a==c)   s=s+1;
   if (c==b)   s=s+1;
   cout<<s;

}
