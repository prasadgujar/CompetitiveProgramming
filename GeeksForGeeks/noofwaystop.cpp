#include <iostream>
using namespace std;

void solve()
{
    long mod = 1000000007;
	int n,m;
	cin>>n>>m;
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		a[i][0] = 1;
	}
	for(int j=0;j<n;j++)
	{
		a[0][j] = 1;
	}
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			a[i][j] = (a[i-1][j] + a[i][j-1])%mod;
		}
	}
	cout<<(a[m-1][n-1])%mod<<"\n";
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