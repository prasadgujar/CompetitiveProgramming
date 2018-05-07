#include<bits.stdc++.h>
using namespace std;

#define MAX ((int)101)

typedef long long ll;

int n,order[MAX],in_degree[MAX];
vector<int> adj[MAX];

bool topological_order()
{
    int head = 0 ;
    int tail = 0;
    for(int i=0;i<n;i++)
    {
        if(!in_degree[i])
        {
            order[tail++] = i;
        }
    }

    int v;
    while(head < tail)
    {
        v  = order[head++];
        for(int i=adj[v].size(),w;--i>=0;)
        {
            w = adj[v][i];
            if(!(--in_degree[w]))
            {
                order[tail++] = w;
            }
        }
    }

    return  tail == n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin.tie(0);

    cin>>n;
    vector<ll>  num(n);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        for(int j=0;j<i;j++)
        {
            if(num[i] == 2*num[j] || (num[j]%3 == 0 && num[i] == num[j]/3))
            {
                adj[j].push_back(i);
                in_degree[i]++;
            }
            else if(num[j] == 2*num[i] || (num[i]%3 == 0 && num[j] == num[i]/3))
            {
                adj[i].push_back(j);
                in_degree[j]++;
            }
        }
    }

    topological_order();

    for(int i=0;i<n;i++)
    {
        cout<<num[order[i]] << " ";
    }
    cout<<endl;


}