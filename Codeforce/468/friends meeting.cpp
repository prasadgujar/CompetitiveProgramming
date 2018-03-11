#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int z[1000];
	for(int i=1;i<=1000;i++)
	{
		z[i]=i;
		z[i] = z[i-1] + z[i];
		//cout<<z[i]<<'\n';
	}
	int diff = abs(a-b);
	if(diff==1)
	{
		cout<<1;
		return 0;
	}
	else if(diff==2)
	{
		cout<<2;
		return 0;
	}
	else if(diff%2==0)
	{
		int sum = z[(diff/2)] + z[(diff/2)];
		cout<<sum;
		return 0;
	}
	else
	{
		diff++;
		int sum = z[(diff/2)] + z[(diff/2)-1];
		cout<<sum;
		
	}
	return 0;
}