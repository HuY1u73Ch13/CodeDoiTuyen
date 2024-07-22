/*#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a,x,s=0,b[1000005];
int main ()
{
    cin>>a>>x;
    for(int i=1;i<=a;i++)
    {
        cin>>b[i];
    }
    for(int j=1;j<a;j++)
    for(int k=j+1;k<=a;k++)
    {
        if(b[j]+b[k]==x)
            s++;
    }
    cout<<s;
}
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,s,res=0,a[1000006];
int main()
{
cin>>n>>s;
for(int i=1; i<=n; i++) {
int x;
scanf("%d" ,&x);
res+=a[s-x], a[x]++;
}
cout << res;
return 0;
}
