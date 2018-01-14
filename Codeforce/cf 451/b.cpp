#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,a,b;
	cin>>n>>a>>b;
	for(int i=0;i*a<=n;i++)
	{
		if((n-i*a)%b==0)
		{
			cout<<"YES"<<'\n';
			cout<<i<<" "<<(n-i*a)/b;
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}