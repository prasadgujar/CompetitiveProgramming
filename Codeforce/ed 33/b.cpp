#include<bits/stdc++.h>
using  namespace std;
#define ll long long int
#define max 100000
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(0)

int main()
{
	fast;
	ll n;
	cin>>n;
	int ans=1;
	for(int i=1;i<=10;++i)
	{
		int ok=((pow(2,i)-1)*pow(2,i-1));
		if(n%ok==0)
		{
			ans=ok;

		
		}
	}
	cout<<ans;
  
	return  0;
}