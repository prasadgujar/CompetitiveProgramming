#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int m,int v )
{
	int dp[v+1];
	
	dp[0] = 0;
	
	for(int i=1;i<=v;i++)
	{
		dp[i] = INT_MAX;
	}
	
	for(int i=1;i<=v;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[j]<=i)
			{
				int ok = dp[i-a[j]];
				if(ok!=INT_MAX && ok+1<dp[i])
				{
					dp[i] = ok + 1;
				}
			}
		}
	}
	
	return dp[v];
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
	 int v,m;
	 cin>>v>>m;
	 int a[m];
	 for(int i=0;i<m;i++)
	 {
	     cin>>a[i];
	 }
     int ok = solve(a,m,v);
     if(ok==INT_MAX)
     {
         cout<<-1<<"\n";
     }
     else
     {
         cout<<ok<<"\n";
     }
    }
	return 0;
}