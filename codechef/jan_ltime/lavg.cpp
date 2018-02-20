#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	double weight;
	double sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>weight;
		sum +=weight;
		
	}
	double x,y;
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
	}
	cout<<setprecision(8)<<(sum/(double)n)<<"\n";
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