#include <bits/stdc++.h>
using namespace std;
#define ll long  int

void solve()
{
	ll n,a,b,c,count;
	ll vs,z;
	cin>>n>>a>>b>>c;
	 count = 0;
	vector<long int> v;
	for(ll i=1;i<=1e6&&i<=n;i++)
	{
		if(n%i==0)
		{
			v.push_back(i);
		}
	}
	
	 vs= v.size();
	
	for(ll i=0;i<vs&&(v[i]<=a);i++)
	{
		
		for(ll  j=0; j<vs&&(v[i]*v[j]<=n)&&(v[j]<b);j++)
		{
			z = n/(v[i]*v[j]); // remainder
			if((v[i]*v[j]*z==n)&&(z<=c))
			{
				count++;
			}
		}
	}
	cout<<count<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	ll n,a,b,c,count;
	ll vs,z,i,j;
	while(t--)
	{
		solve();
	
	/*cin>>n>>a>>b>>c;
	 count = 0;
	vector<long int> v;
	for(ll i=1;i<=1e6&&i<=n;i++)
	{
		if(n%i==0)
		{
			v.push_back(i);
		}
	}
	
	 vs = v.size();
	
	for( i=0;i<vs&&(v[i]<=a);i++)
	{
		
		for(  j=0; j<vs&&(v[i]*v[j]<=n)&&(v[j]<b);j++)
		{
			z = n/(v[i]*v[j]); // remainder
			if((v[i]*v[j]*z==n)&&(z<=c))
			{
				count++;
			}
		}
	}
	cout<<count<<"\n";*/

	}
	return 0;
}