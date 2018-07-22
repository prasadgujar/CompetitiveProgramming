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
	int max_far = a[0];
	int max_end = a[0];
	for(int i=1;i<n;i++)
	{
		max_end = max(a[i],max_end + a[i]);
		max_far = max(max_end,max_far);
		/*if(max_end<0)
		{
			max_end = 0;
		}*/
		/*
		if(max_far<max_end)
		{
			max_far  = max_end;
		}
		*/
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