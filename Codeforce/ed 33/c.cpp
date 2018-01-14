#include<bits/stdc++.h>
using  namespace std;
#define ll long long int
#define max 100000
#define pb push_back
ll n,m,cost[max],now_min;
bool visited[max];
vector<ll> adj[max];
ll ans=0; 
void dfs(int s)
{
		 if(!visited[s])
		{
			visited[s] = true;
			now_min = min(now_min,cost[s]);
			for(ll i:adj[s])
			{
				dfs(i);
			}
		}
	
}
int main()
{
	cin>>n>>m;
	for(ll i=0;i<n;i++)
	{
		cin>>cost[i];
	}
	for(ll i=0;i<m;i++)
	{
		ll u,v;
		cin>>u>>v;
		u--;
		v--;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	for(ll i=0;i<n;i++)
	{
		if(!visited[i])
		{
			now_min=cost[i];
			dfs(i);
			ans +=now_min;
		}
	}
	cout<<ans<<'\n';
	return 0;
}