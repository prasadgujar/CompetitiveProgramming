#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
void solve()
{
	ll n,k,b;
	cin>>n>>k>>b;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll x=a[0];
	ll cn=0;
	for(ll i=1;i<n;i++)
	{
		if(k*x+b<=a[i] )    // y(x) = k · x + b
		{
			cn++;
			x = a[i];
		}
		
	}
	
	cout<<cn+1<<'\n';
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