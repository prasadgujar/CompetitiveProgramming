#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int sum = 0;
	int total = (n*(n+1))/2;
	for(int i=0;i<n-1;i++)
	{
		int x;
		cin>>x;
		sum+=x;
		
	}
	
	cout<<total-sum<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}