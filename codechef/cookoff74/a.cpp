#include <bits/stdc++.h>
using namespace std;
void solve()
{
	long int n,b,m;
	cin>>n>>b>>m;
	long long int res  = 0;
	while(n)
	{
		long int p;
		if(n%2==0)
		{
			p = n/2;
		}
		else
		{
			p =  (n+1)/2;
		}
		
		res +=p*m;
		n -=p;
		if(n)
		{
		res+=b;
		}
		m =  2* m;
	}
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