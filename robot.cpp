#include <bits/stdc++.h>
const int L[]= {3,0,1,2};
const int R[]= {1,2,3,0};
const int B[]= {2,3,0,1};
const int tx[]= {0,1,0,-1};
const int ty[]= {1,0,-1,0};
using namespace std;
int n;
string s;
int main()
{
    //freopen("robot.inp", "r", stdin);
    //freopen("robot.out", "w", stdout);
    cin>>n;
    cin>>s;
    int h=0, x=0, y=0;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]=='L') h=L[h];
        if (s[i]=='R') h=R[h];
        if (s[i]=='B') h=B[h];
        x=x+tx[h];
        y=y+ty[h];
    }
    cout<<x<<" "<<y;
    return 0;
}
