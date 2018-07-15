#include <bits/stdc++.h>
using namespace std;


void solve()
{
	int n;
	cin>>n;
	map<int,int> mp;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	bool  ok  = false;
	for(int i=0;i<n;i++)
	{
		if(mp[a[i]]==1)
		{
			ok = true;
			cout<<a[i]<<endl;
			break;
		}
	}
	if(ok==false)
	{
		cout<<0<<endl;
	}
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