#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	int q;
	cin>>n;
	cin>>q;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ok;
	int l,r;
	int maxn = 1000010;
	int prefix[maxn];
	int suffix[maxn];
	prefix[0]=0;
	suffix[n+1]=0;
	for(int i=1;i<=n;i++)
	{
		prefix[i] = __gcd(prefix[i-1],a[i]);
	}
	for(int i=n;i>=1;i--)
	{
		suffix[i] = __gcd(suffix[i+1],a[i]);
	}
	for(int i=0;i<q;i++)
	{
		cin>>l>>r;
		int ok = __gcd(prefix[l-1],suffix[r+1]);
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