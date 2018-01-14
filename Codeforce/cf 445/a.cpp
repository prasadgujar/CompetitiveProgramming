#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n=6;
	int cn=0,sum1=0,sum2=0;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5])
	  {
	  	cout<<"YES";
	  }
	else if(a[1]+a[3]+a[2]==a[0]+a[4]+a[5])
	{
		cout<<"YES";
	}
	else if(a[1]+a[2]+a[4]==a[0]+a[3]+a[5])
	{
		cout<<"YES";
	}
	else if(a[1]+a[2]+a[5]==a[0]+a[3]+a[4])
	{
		cout<<"YES";
	}
		else if(a[0]+a[2]+a[5]==a[1]+a[3]+a[4])
	{
		cout<<"YES";
	}
		else if(a[0]+a[2]+a[4]==a[1]+a[3]+a[5])
	{
		cout<<"YES";
	}
		else if(a[0]+a[2]+a[3]==a[1]+a[5]+a[4])
	{
		cout<<"YES";
	}
		else if(a[1]+a[0]+a[5]==a[2]+a[3]+a[4])
	{
		cout<<"YES";
	}
		else if(a[1]+a[0]+a[4]==a[2]+a[3]+a[5])
	{
		cout<<"YES";
	}
		else if(a[1]+a[0]+a[3]==a[2]+a[5]+a[4])
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}