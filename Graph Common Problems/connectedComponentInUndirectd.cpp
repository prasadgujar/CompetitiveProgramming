#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;

    list<int> *adj;

    void dfsutil(int v, bool visited[]);

  public:
    Graph(int V);
    void addedge(int v, int w);
    void connectedComponents();
};

void Graph::connectedComponents()
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    for (int v = 0; v < V; v++)
    {
        if (visited[v] == false)
        {
            dfsutil(v, visited);
            cout << "\n";
        }
    }
}

void Graph::dfsutil(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); i++)
    {
        if (!visited[*i])
        {
            dfsutil(*i, visited);
        }
    }
}

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addedge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

int main()
{
    Graph g(5);
    g.addedge(1, 0);
    g.addedge(2, 3);
    g.addedge(3, 4);

    cout << "following are the connected components\n";
    g.connectedComponents();

    return 0;
}
/*
following are the connected components 
0 1
 2 3 4