#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	string s ="zyxwvutsrqponmlkjihgfedcba";
	string res = "";
	if(n<=25)
	{
		res = s.substr(25-n);
		
	}
	else
	{
		while(n>25)
		{
			res = s + res;
			n -=25;
		}
		if(n!=0)
	 	res = s.substr(25-n)+res;
	}
	/*reverse(s.begin(),s.end());
	string res = s.substr(0,n+1);
	 //cout<<res;
	reverse(res.begin(),res.end());*/
	cout<<res<<"\n";
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