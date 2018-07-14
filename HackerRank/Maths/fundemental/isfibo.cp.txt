#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main() {
	int t;
	cin>>t;
	long long a = 0;
	long long b = 1;
	long long c;
	while(true)
	{
		c = a + b;
		if (c > 10000000000LL) break;
		mp[c] = 1;
		a = b;
		b = c;
	}
	long long  n;
	while(t--)
	{
		scanf("%lld",&n);
		assert(n <= 10000000000LL);
		if(mp[n])
		{
			cout<<"IsFibo"<<"\n";
		}
		else
		{
			cout<<"IsNotFibo"<<"\n";
		}
	}
	return 0;
}