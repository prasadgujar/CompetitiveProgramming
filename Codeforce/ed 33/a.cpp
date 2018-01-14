#include<bits/stdc++.h>
using  namespace std;
#define ll long long int
#define max 100000
#define pb push_back
#define fast ios::sync_with_stdio(false); cin.tie(0)

int main()
{
	fast;
	ll n,x;
	cin>>n;
	/*int ans=1;
	for(int i=1;i<=n;++i)
	{
		int ok=(pow(2,i)-1)*pow(2,i-1));
		if(n%ok==0)
		{
			ans=ok;

		
		}
	}
	cout<<ans;
  */
	int a=1,b=2,c=3;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==c)
		{
			cout<<"NO"<<'\n';
			return 0;
		}
		c = 6-x-c;
	}
	cout<<"YES"<<'\n';
	return  0;
}