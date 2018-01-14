#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll x,y;
	ll cn=0;
	ll wg=0;
	for(ll i=0;i<n;i++)
	{
		cin>>x>>y;
		if(x>0)
		{
			cn++;
		}
		else if(x < 0 )
		{
			wg++;
		}
	}
	if(cn==1 || wg==0 || cn==0 || wg==1)
	{
		cout<<"YES";
	}
	
	else
	{
		cout<<"NO";
	}
	return 0;
}