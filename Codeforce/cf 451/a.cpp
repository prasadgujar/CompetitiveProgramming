#include <iostream>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	
	cin>>n;
	
	if(n%10==0)
	{
		cout<<n;
	}
	else if(n%10==5)
	{
		while(n%10!=0)
		{
			n++;
		}
		cout<<n;
	}
	else if(n%10>=1&&n%10<=4)
	{
			while(n%10!=0)
		{
			n--;
		}
		cout<<n;
	}
		else if(n%10>=1&&n%10<=49)
	{
			while(n%10!=0)
		{
			n++;
		}
		cout<<n;
	}
	return 0;
}