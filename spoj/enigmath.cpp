#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll x,ll y)
{
	if(x==0 || y==0)
		return max(x,y);
	if(x<y)
		swap(x,y);
	return gcd(x%y,y);
}
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		cout<<y/gcd(x,y)<<' '<<x/gcd(x,y)<<'\n';		
	}
}