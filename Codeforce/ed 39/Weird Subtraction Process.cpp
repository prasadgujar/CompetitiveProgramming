#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int a,b;
	cin>>a>>b;
	while(1)
	{
		if(a==0 or b==0)
		{
			break;
		}
		else if(a>=2*b)
		{
			a %=2*b;
		}
		else if(b>=2*a)
		{
			b %=2*a;
		}
		else
		{
			break;
		}
	}
	cout<<a<<" "<<b;
	return 0;
}