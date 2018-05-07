#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;  // no of vertices
    list<int> *adj;

    void topologicalsortutil(int v,bool visited[],stack<int> &Stack)
    {
        public:
        Graph(int V);

        void addEdge(int v,int w)

        void toplogicalsort();

    };

    Graph::Graph(int v)
    {
        this->V = v;
        adj = new list<int> [v];
    }

    void Graph::addEdge(int v,int w)
    {
        adj[v].push_back(w);
    }

    void Graph::topologicalsortutil(int v,bool visited[],stack<int> &Stack)
    {
        visited[v]  = true;
        list<int>::iterator i;
        for(i = adj[v].begin();i!=adj[v].end();++i)
        {
            if(!visited[*i])
            {
                topologicalsortutil(*i,visited,Stack);
            }
        }
        Stack.push(v);
    }

    void Graph::topologicalsort()
    {
        stack<int> Stack;

        bool *visited = new bool[v];
        for(int i=0;i<v;i++)
        {
            visited[i] = false;
        }

        for(int i=0;i<v;i++)
        {
            if(visited[i]==false)
            {
                topologicalsortutil(i,visited,stack);
            }
        }

        while(Stack.empty() == false)
        {
            cout<<Stack.pop()<< " ";
            Stack.pop();
        }
    }

    int main()
    {
        Graph g(6);
        g,addEdge(5,2);
        g.addEdge(5,0);
        g.addEdge(4,0);
        g.addEdge(4,1);
        g.addEdge(2,3);
        g.addEdge(3,1);
    }

}