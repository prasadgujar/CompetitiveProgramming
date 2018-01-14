#include<bits/stdc++.h>
using namespace std;
#define ll long long int
inline ll powerMode(ll x,ll y,ll _mod)
{
	if(y==0)
	return 1;
	ll ret = powerMode(x,y/2,_mod);
	ret = (ret*ret)%mod;
	if(y%2==1)
	ret*=x;
	ret %=_mod;
	return ret;
 
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll a,b;
		scanf("%lld",&a);
		scanf("%lld",&b);
		printf("%lld\n",powerMode(a,b,10));
	}
}