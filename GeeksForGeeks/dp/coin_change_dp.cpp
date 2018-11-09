#include <iostream>
using namespace std;

int cc(int v[],int amount,int n)
{
	int dp[n+1][amount+1];
	for(int i=0;i<=n;i++)
	{
		dp[i][0] = 1;
	}
	for(int i=1;i<=amount;i++)
	{
		dp[0][i]=0;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=amount;j++)
		{
			if(v[i-1]<=j)
			{
				dp[i][j] = dp[i-1][j]+dp[i][j-v[i-1]];
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[n][amount];
}
void solve()
{
	int amount;
	int n;
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cin>>amount;
	cout<<cc(v,amount,n)<<"\n";
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