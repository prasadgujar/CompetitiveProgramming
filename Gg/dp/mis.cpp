#include <bits/stdc++.h>
using namespace std;

int mis(int a[],int n)
{
    int dp[n];
    for(int i=0;i<n;i++)
    {
        dp[i] = a[i];
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j]&&dp[i]<dp[j]+a[i])
            {
                dp[i] = dp[j]+a[i];
            }
        }
    }
    
    int ok ;
    ok = 0;
    for(int i=0;i<n;i++)
    {
        ok = max(ok,dp[i]);
    }
    return ok;
}
void solve()
{
    int n;
    cin>>n;  
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<mis(a,n)<<"\n";
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