#include <bits/stdc++.h>
using namespace std;

int ok(int n,int m)
{
   int dp[m][n];
   for(int i=0;i<m;i++)
   {
       dp[i][0]=1;
   }
   for(int j=0;j<n;j++)
   {
       dp[0][j] = 1;
   }
   long int mod = pow(10,9)+7;
   for(int i=1;i<m;i++)
   {
       for(int j=1;j<n;j++)
       {
           dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
       }
   }
   return dp[m-1][n-1];
}
void solve()
{
    int n,m;
    cin>>n>>m;
    cout<<ok(n,m)<<"\n";
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