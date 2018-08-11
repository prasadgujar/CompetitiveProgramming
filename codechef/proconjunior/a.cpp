#include <bits/stdc++.h>
using namespace std;
void solve()
{
	long int n,x;
	cin>>n>>x;
	long int a[n];
	long int ok = -1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ok =  max(a[i],ok);
	}
	//sort(a,a+n);
	//cout<<a[n-1]<<" ";
	if(ok>=x)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
} 