#include <bits/stdc++.h>
using namespace std;

void solve()
{ 
	char s;
	int a[200] = {0};
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>s;
			if(s=='*')
			{
				a[i]++;
			}
		}
	}
	int mx;
	while(k--)
	{
		mx = 0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<a[mx])
			{
				mx = i;
			}
		}
		a[mx] = m - a[mx];
	}
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum +=a[i];
	}
	cout<<sum<<"\n";
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}