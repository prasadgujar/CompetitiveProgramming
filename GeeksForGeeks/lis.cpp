#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	int sum  = 0;
	int lis[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		lis[i] = 1;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j] && lis[i]<lis[j]+1)
			{
				lis[i] = lis[j]+1;
			}
		}
	}
	sort(lis,lis+n);
	cout<<lis[n-1]<<"\n";


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