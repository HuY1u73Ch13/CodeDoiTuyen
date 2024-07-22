#include <bits/stdc++.h>
#define N 100001
using namespace std;
int a[N];
int n;
long long s1=0, s2=0;
int main()
{
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    int l=1, r=n, luot=0;
    while (l<=r)
    {
        if (luot==0)
            if (a[l]>a[r]) s1+=a[l++];
            else s1+=a[r--];
        else
            if (a[l]>a[r]) s2+=a[l++];
            else s2+=a[r--];
        luot=1-luot;
    }
    cout<<s1<<" "<<s2;
    return 0;
}
