#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V; // no of vertices
    list<int> *adj;

    void topologicalsortutil(int v, bool visited[], stack<int> &Stack);

  public:
    Graph(int V);

    void addEdge(int v, int w);

    void topologicalsort();
};

Graph::Graph(int v)
{
    this->V = v;
    adj = new list<int>[v];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::topologicalsortutil(int v, bool visited[], stack<int> &Stack)
{
    visited[v] = true;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if (!visited[*i])
        {
            topologicalsortutil(*i, visited, Stack);
        }
    }
    Stack.push(v);
}

void Graph::topologicalsort()
{
    stack<int> Stack;

    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            topologicalsortutil(i, visited, Stack);
        }
    }

    while (Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

int main()
{
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout << "following is the topological sort:\n";
    g.topologicalsort();
    return 0;
}

/**
 * 
 following is the topological sort:
5 4 2 3 1 0
**
**/