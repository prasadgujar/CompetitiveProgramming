#include<bits/stdc++.h>
using namespace std;
#define mmax 20010
#define nmax 10010

int graph[mmax][2],graph1[nmax];

int find(int set1)
{
	if(graph1[set1]==-1)
		return set1;
	return find(graph1[set1]);
}

int main()
{
	int n,m,u,v;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&graph[i][0],&graph[i][1]);
	}
	memset(graph1,-1,sizeof(int)*nmax);
	bool ok=true;
	for(int i=0;i<m;i++)
	{
		u=find(graph[i][0]);
		v=find(graph[i][1]);
		if(u==v)//if both having same parent
		{
			ok=false;
			break;
		}
		graph1[u]=v; // assigning u as parent of v.
	}
	if(ok)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;

}