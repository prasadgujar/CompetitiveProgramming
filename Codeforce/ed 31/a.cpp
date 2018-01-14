#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t;
	cin>>n>>t;
	int x;
	for(int i=1;i<=n;++i)
	{
		cin>>x;
		x = 86400-x;
		if(x>=t)
		{
			cout<<i<<'\n';
			break;
		}
		
		t -=x;
	
	}
	return 0;
