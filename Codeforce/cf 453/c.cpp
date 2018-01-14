#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int h;
	cin>>h;
	int a[h+1];
	for(int i=0;i<=h;i++)
	{
		cin>>a[i];
		
	}
	
	bool ok=true;
	for(int i=0;i<h;i++)
	{
		if(a[i]>1&&a[i+1]>1)
		{
			ok=false;
			break;
		}
	}
	
	if(ok)
	{
		cout<<"perfect"<<'\n';
	}
	else
	{
		cout<<"ambiguous"<<'\n';
		cout<<0<<' ';
		int sum=1;
		for(int i=1;i<=h;i++)
		{
			for(int j=0;j<a[i];j++)
			{
				cout<<sum<<' ';
			}
			sum +=a[i];
		}
		cout<<'\n';
		cout<<0<<' ';
		sum=1;
			for(int i=1;i<=h;i++)
		{
			for(int j=0;j<a[i];j++)
			{
				cout<<(!j&&a[i-1]>1&&a[i]>1?sum-1:sum)<<' ';
			}
			sum +=a[i];
		}
	}
	return 0;
}