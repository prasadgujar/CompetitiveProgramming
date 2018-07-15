#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int v[n];
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		{
			v[n-1] = -1;
		}
		else if(a[i]>a[i+1])
		{
			v[i] = a[i+1];
		}
		else
		{
			v[i] = -1;
		}
	}
	for(int i=0;i<n;i++)
	{
	    cout<<v[i]<<" ";
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