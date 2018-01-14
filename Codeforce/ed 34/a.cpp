#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==1 or x==2 or x==4 or x==5 or x==8 or x==11 )
		{
			cout<<"NO"<<'\n';
		}
		else
		{
			cout<<"YES"<<'\n';
		}
	}
	return 0;
}