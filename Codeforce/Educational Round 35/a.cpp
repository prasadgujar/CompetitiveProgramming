#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll a[n];
	ll minn=INT_MAX;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<minn)
		{
			minn=a[i];
		}
	}
	vector<ll> v;
	ll lvisited=0;
	for(int i=0;i<n;i++)
	{
		if(minn==a[i])
		{
			v.push_back(i);
		}
		
	}
	ll min_dist=INT_MAX;
	for(ll i=0;i<v.size();i++)
	{
		min_dist=min(min_dist,abs(v[i]-v[i+1]));
	}
	cout<<min_dist;
	return 0;
}