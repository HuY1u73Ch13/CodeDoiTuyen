
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll d1[26],d2[26],s=0;
string s1,s2;
int main ()
{
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        d1[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++)
    {
        d2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        s+=abs(d1[i]-d2[i]);
    }
    cout<<s;

}
