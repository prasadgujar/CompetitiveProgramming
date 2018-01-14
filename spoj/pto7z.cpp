#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
bool visited[10002];
ll result,path,i;
ll dist[10002];
ll n,u,v;
vector<int> graph[10002];
int bfs(int origin)
{
	bool visited[n] ; 

	for( i=0;i<n;i++)
	{
		visited[i]=false;
	}

	for( i=0;i<n;i++)
	{
		dist[i]=0;
		
	}

	queue<int> q; 
	q.push(origin); 
	visited[origin]=true;
	while(q.empty()==false)
	{
		ll vertices;
		vertices = q.front();
		q.pop();
		for( i=0;i<graph[vertices].size();i++)
	{
		if(visited[graph[vertices][i]]==false)//if already visited then false
		{
			dist[graph[vertices][i]]=dist[vertices]+1;
			visited[graph[vertices][i]]=true;
			q.push(graph[vertices][i]); // insert into queue
		}
		
	}
	
	}
	path=0;
	for( i=1;i<n;i++)
	{
		path=max(path,dist[i]);
		if(path==dist[i])
		 {
			path=i;
	     }
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	scanf("%d",&n);
	for(int i=0;i<n-1;i++)
	{
		scanf("%d%d",&u,&v);
		graph[u].push_back(v);
		graph[v].push_back(u);

	}
	bfs(1);
	bfs(path);
	printf("%d\n",path);
	return 0;
}