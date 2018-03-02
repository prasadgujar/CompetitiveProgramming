#include <bits/stdc++.h>
using namespace std;
int a[100005];
int dp[100005];
bitset<100005> visited;
int main() {
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int cn=0;
	for(int i=n;i>0;i--)
	{
		if(!visited[a[i]]) // new element is visited
		{
			dp[i] = ++cn; //increase as count of unique no 
			visited[a[i]] = 1; // update the bitset to as visited element
		}
		else
		{
			dp[i] = dp[i+1]; // previous count as thus current element is not new element
		}
	}
	int l;
	for(int i=0;i<m;i++)
	{
		cin>>l;
		cout<<dp[l]<<'\n';
	}
	return 0;
}