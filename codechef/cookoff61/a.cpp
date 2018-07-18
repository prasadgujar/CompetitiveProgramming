#include <iostream>
using namespace std;

void solve()
{
	string a;
	string b;
	cin>>a;
	cin>>b;
	int n = a.length();
	bool ok = true;
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i] or a[i]!=b[i] && a[i]=='?' or b[i]=='?')
		{
			continue;
		}
		else
		{
			ok = false;
			break;
		}
	}
	
	if(ok==true)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
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