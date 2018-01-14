#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,x;
	ll one=0;
	ll two=0;
	scanf("%lld",&n);

         
	for(ll i=0;i<n;i++)
	{
		scanf("%lld",&x);
		if(x==1)
		{
			one++;
		}
		else
		{
			two++;
		}
		

	}
	if(one<two)
	{
		cout<<one;
	}
	else 
	{
		cout<<two+(one-two)/3;
	}
	return 0;
}