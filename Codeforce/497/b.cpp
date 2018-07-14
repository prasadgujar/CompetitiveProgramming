#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long long int rip  = 100000000013;
	long int w,h;
	bool ok = true;
	for(int i=0;i<n;i++)
	{
		cin>>w>>h;
		if(max(w,h)<=rip)
		{
			rip = max(w,h);
		}
		else if(min(w,h)<=rip)
		{
			rip = min(w,h);
		}
		else
		{
			ok  = false;
		}
	}
	if(ok==true)
	{cout<<"yes";}
	else
	{
		cout<<"no";
	}
	return 0;
}