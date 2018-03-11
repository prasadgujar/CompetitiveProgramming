#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int n;
	cin>>n;
	int x;
	int ok1=0;
	int ok2=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x<0)
		{
			ok1 +=x;
			
		}
		else
		{
			ok2 +=x;
			
		}
	}
	

	cout<<ok2-ok1;
	return 0;
}