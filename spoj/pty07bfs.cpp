#include<bits/stdc++.h>
using namespace std;
int bfs(std::vector<int> graph[],int origin,int n)
{
	bool visited[n+1] ={0}; 
	queue<int> q; //queue for stroing nodes
	q.push(origin); //source node
	int cn=0; //no of edges
	int vertices;
	memset(visited,0,sizeof(visited));
	while(!q.empty())//visit all vertices
	{
		vertices = q.front();
		q.pop();
		visited[vertices]=1;
		for(int i=0;i<graph[vertices].size();i++)
	{
		if(visited[graph[vertices][i]])//if already visited then false
			return 0;
		else
		{
			q.push(graph[vertices][i]); // insert into queue
		}
	}
	cn++;
	}
	if(cn!=n) // no edges are not equal to no of nodes in the graph return false
		return 0;
	else 
		return 1;
}
int main()
{
	int n,m,u,v;
	scanf("%d%d",&n,&m);
	std::vector<int> graph[n+1];
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&u,&v);
		graph[u].push_back(v);
	}
	if(bfs(graph,1,n))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}