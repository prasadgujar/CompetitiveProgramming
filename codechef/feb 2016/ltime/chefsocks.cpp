#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	int ok = (z-x)/y;
	if(ok%2==1)
	{
		cout<<"Unlucky Chef";
	}
	else
	{
		cout<<"Lucky Chef";
	}
	return 0;
}