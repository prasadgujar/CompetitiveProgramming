#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,a,b;
	cin>>n>>a>>b;
	int ok=0;
	
	for(int i=1;i<=min(a,b);i++)
	{
		int a1=a/i;
		int b1=b/i;
		//cout<<a1<<" "<<b1;
		if(a1+b1>=n)
		{
			ok=i;
		
		}
		else
		break;
	}
	cout<<ok;
	return 0;
}