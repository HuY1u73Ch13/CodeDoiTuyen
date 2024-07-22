#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll n,d(0),kq;
string s;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>s;
    s+="0";
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]=='1') d++;
        else {kq+=d*(d+1)/2;d=0;}
    }
    cout<<kq;
}