#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	/*if(k==1 or k>n)
	{
		reverse(a,a+n);
			for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	}
	else
	{*/
	for(int i=0;i<n;i+=k)
	{
		int lf = i;
		int rg = min(i+k-1,n-1);
		while(lf<rg)
		{
			swap(a[lf++],a[rg--]);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}