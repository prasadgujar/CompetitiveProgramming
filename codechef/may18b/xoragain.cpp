#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a;
	cin>>a;
	for(int i=0;i<n-1;i++)
	{
		int b;
		cin>>b;
		//int ok;
		a = a^b;
	}
	
		cout<<a*2<<"\n";
	
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