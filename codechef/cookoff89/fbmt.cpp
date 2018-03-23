#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	if(n==0)
	{
	    cout<<"Draw"<<'\n';
	    //break;
	}
	else
	{
    string a,s,b;
	cin>>a;
	int c1=0;
	int c2=0;
	c1++;
	for(int i=0;i<n-1;i++)
	{
		cin>>s;
		if(s==a)
		{
			c1++;
		}
		else
		{
			c2++;
			b = s;
		}
	}
	
	
	if(c1<c2)
	{
		cout<<b<<'\n';
	}
	else if(c1>c2)
	{
		cout<<a<<'\n';
	}
	else
	{
		cout<<"Draw"<<'\n';
	}
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