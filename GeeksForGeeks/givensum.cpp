#include <iostream>
using namespace std;

void solve()
{
	int n,sum;
	cin>>n>>sum;
	 int a[n];
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
	 int cnt = 0;
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=i+1;j<n;j++)
	 	{
	 		if(a[i]+a[j]==sum)
	 		cnt++;
	 	}
	 }
	 cout<<cnt<<"\n";
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