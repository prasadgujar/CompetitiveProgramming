#include <bits/stdc++.h>
using namespace std;

vector<int> yo[100];
bool visited[100];

void dfs(int z)
{
    visited[z] = true;
    for(auto go:yo[z])
    {
        if(!visited[go])
        {
            dfs(go);
        }
    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    int u,v;
    for(int i=0;i<m;++i)
    {
        cin>>u>>v;
        --u;
        --v;
        yo[u].push_back(v);
        yo[v].push_back(u);
    }
   int ok = 0;
   for(int i=0;i<n;++i)
   {
       if(!visited[i])
       {
           dfs(i);
           ok++;
       }
   }

   cout<<(1LL<<(n-ok));  
}
int main()
{
    solve();
}