#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n];
	int sum  = 0;
	int mis[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mis[i] = a[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j] && mis[i]<mis[j]+a[i])
			{
				mis[i] = mis[j]+a[i];
			}
		}
	}
	sort(mis,mis+n);
	cout<<mis[n-1]<<"\n";


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