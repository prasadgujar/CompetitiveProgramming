#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s; 
	string ss = s;
	reverse(ss.begin(),ss.end());
	if(s==ss)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
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