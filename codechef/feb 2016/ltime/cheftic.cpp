#include <iostream>
using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	int cn=0;
	int m=n;
	while(n--)
	{
		string s;
		cin>>s;
		for(int i=0;i<m;i++)
		{
			if(s[i]=='.')
			{
				cn++;
			}
			
		}
		
	}
	
	if(cn>=1)
	{
		cout<<"YES"<<'\n';
	}
	else
	{
		cout<<"NO"<<'\n';
	}
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