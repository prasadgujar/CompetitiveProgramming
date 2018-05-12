#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		ll rip = INT_MAX;
		int n;
		ll h;
		cin>>n>>h;
		ll sum = 0;
		ll x;
		int ok = 0;
		vector<ll> v;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
			if(x>ok)
			{
				ok = x;
			}
			sum +=x;
		}
			if(n==h)
			{
				cout<<ok<<'\n';
				break;
				
			}
			else
			{
				
				for(ll i=0;i<n;i++)
				{
					if(sum%v[i]==0&&sum/v[i]<=h)
					{
						rip = min(rip,v[i]);
						cout<<rip;
						break;
						
					}
				}
			}
			
	}

	return 0;
}