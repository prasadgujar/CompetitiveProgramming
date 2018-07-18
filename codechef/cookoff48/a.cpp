#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	set<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	cout<<s.size()<<"\n";
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