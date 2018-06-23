#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int ok = 0;
	if(n%2==1)
	{
		cout<<0;
		return 0;
	}
	else
	{
		if(n%4==0)
		{
			int y  = n/4;
			y = y - 1;
			cout<<y;
		}
		else
		{
			cout<<n/4;
		}
	}
	return 0;
}