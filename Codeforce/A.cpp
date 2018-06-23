#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int x=0;
	for(int i=n/2+n%2;i<=n;i++)
	{
	    if(i%m==0)
	    {
	    	x = i;
	    	break;
	    }
	}
	if(m>n or x==0)
	{
		cout<<-1;
	}
	else
	{
		cout<<x;
	}
	return 0;
}