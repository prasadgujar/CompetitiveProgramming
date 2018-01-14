#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
            ll a,b,c,z,cs=0;
	cin>>t;

	while(t--)
	{
		cs++;
		cin>>a>>b>>c;
		z=__gcd(a,b);
		if(c%z)
		{
				cout<<"Case "<<cs<<":"<<" No"<<'\n';

		}
		else
		{
				cout<<"Case "<<cs<<":"<<" Yes"<<'\n';;
		}

	}
	return 0;
}
/*
https://en.wikipedia.org/wiki/B%C3%A9zout%27s_identity
 ax+by=c
Diophantine equation
*/

