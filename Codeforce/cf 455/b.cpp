#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	if(n&1)
	{
	 cout<<(n/2+1)*(n/2+1);
	}
	else
	{
		cout<<(n/2 +1)*(n/2);
	}
		
	
   return 0;
}