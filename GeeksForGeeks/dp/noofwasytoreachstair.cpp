#include <bits/stdc++.h>
using namespace std;
 
long int mod = pow(10,9)+7;
int ss = 100000;

/*int solve()
{
    long long int dp[ss+1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=ss;i++)
    {
        dp[i] = (dp[i-1]+dp[i-2])%mod;
    }
    //cout<<dp[n]<<"\n";
}*/
int main() {
	int t;
	cin>>t;
	long long int dp[ss+1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=ss;i++)
    {
        dp[i] = (dp[i-1]+dp[i-2])%mod;
    }
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<dp[n]<<"\n";
	}
	return 0;
}