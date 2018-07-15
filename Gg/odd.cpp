#include <bits/stdc++.h>
using namespace std;


void solve()
{
	int n;
	cin>>n;
	int x;
	int ok = 0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		ok ^=x;
	}
	
	cout<<ok<<endl;
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