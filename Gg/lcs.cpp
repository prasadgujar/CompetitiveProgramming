#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	string ss;
	int n,m;
	cin>>m;
	cin>>n;
	cin>>s;
	cin>>ss;
	int lcs[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 or j==0)
			{
				lcs[i][j] = 0;
			}
			else if(s[i-1]==ss[j-1])
			{
				lcs[i][j] = lcs[i-1][j-1]+1;
			}
			else
			{
				lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
			}
		}
		

	}
			cout<<lcs[m][n]<<"\n";
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