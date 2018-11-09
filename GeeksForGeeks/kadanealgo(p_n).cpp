#include <iostream>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max_far = 0;
	int max_end = 0;
	for(int i=0;i<n;i++)
	{
		max_end = max_end + a[i];
		if(max_end<0)
		{
			max_end = 0;
		}
	
		if(max_far<max_end)
		{
			max_far  = max_end;
		}
		
	}
	
	cout<<max_far<<"\n";

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