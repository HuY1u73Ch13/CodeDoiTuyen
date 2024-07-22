#include<bits/stdc++.h>
#define nmax 100000
using namespace std;
bool check(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>'9' or s[i]<'0')
		{
			return false;
		}
	}
	return true;
}
long long chuyen(string s)
{
	long long sum=0,mu=1;
	for(int i=s.length()-1;i>=0;i--)
	{
		sum=sum+(s[i]-48)*mu;
		mu=mu*10;
	}
	return sum;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("BDSO.inp","r",stdin);
	freopen("BDSO.out","w",stdout);
	string a[nmax+9];
	long long b[nmax+9];
	int n;
	cin>>n;
	int k=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(check(a[i]))
		{
			k++;
			b[k]= chuyen(a[i]);
			a[i]="";
		}
	}
	sort(b+1,b+k+1);
	k=1;
	for(int i=1;i<=n;i++)
	{

		if(a[i]=="")
		{
			cout<<b[k]<<" ";
			k++;

		}
		else cout<<a[i]<<" ";
	}

}
