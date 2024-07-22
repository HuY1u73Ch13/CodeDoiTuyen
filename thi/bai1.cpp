#pragma GCC target ("avx2")
#pragma GCC optimze ("02")
#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
using namespace std;
double a,b,h;
int main()
{
    cin >> a >> b >> h;
    b = b * acos(-1) / 180;
    cout<<fixed<<setprecision(3)<<h+a*tan(b);
}