#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int a;
	int k;
	cin>>a>>k;
	//int aa  = 512;
	//cout<<aa%10;
	while(k--)
	{
		if(a%10>0)
		{
			a--;
		}
		else
		{
			a = a/10;
		}
	}
	cout<<a;
	return 0;
}