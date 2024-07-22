#include <bits/stdc++.h>
using namespace std;
string s;
long long d;
int main()
{
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if (47<s[i]&&s[i]<58 or s[i]==45)
        {
            if (47<s[i-1] and s[i-1]<58 )
            {
                d=d+s[i];
            }
            cout<<d;

        }
    }
}
