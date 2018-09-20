#include <iostream>
using namespace std;

int lps(string s)
{
    int n = s.length();
    int i,j,sl;
    int dp[n][n];
    
    for(int i=0;i<n;i++)
    {
        dp[i][i] = 1;
    }
    
    for(sl=2;sl<=n;sl++)
    {
        for(i=0;i<n-sl+1;i++)
        {
            j = i+sl-1;
            
            if(s[i]==s[j]&&sl==2)
            {
                dp[i][j]=2;
            }
            else if(s[i]==s[j])
            {
                dp[i][j] = dp[i+1][j-1]+2;
            }
            else
            {
                dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
            }
        }
    }
    return dp[0][n-1];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    cout<<lps(s)<<"\n";
	
	    
	}
	return 0;
}