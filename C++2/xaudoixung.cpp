#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string s,s1;
    cin>>s;
    for (int i=s.length()-1;i>=0;i--)
    s1=s1+s[i];
    if (s1==s)
        cout<<"xau doi xung";
    else
        cout<<"xau ko doi xung ";

}
