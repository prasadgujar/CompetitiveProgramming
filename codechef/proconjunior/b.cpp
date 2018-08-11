#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int ok = 0;
	for(int i=1;i<=n;i++)
	{
		
			if(i%2==1)
			{
				ok+=i*i;
			}
		
	}
	int res=(n * (n + 1) / 2) * (2*n + 1) / 3;
	if(n%2==0)
	{
	cout<<abs(res-ok)<<"\n";
	}
	else
	{
	  cout<<ok<<"\n";	
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