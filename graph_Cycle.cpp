#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    vector<int> *adj;
    bool iscyc(int v, bool visited[], bool *stack);

public:
    Graph(int V);
    void addEdge(int v, int w);
    bool iscyclic();
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
// This tells us about the presence of Cycle using Depth First Search
bool Graph::iscyc(int v, bool visited[], bool *stack)
{
    if (visited[v] == false)
    {
        visited[v] = true;
        stack[v] = true;
        for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if (!visited[*i] && iscyc(*i, visited, stack))
                return true;
            else if (stack[*i])
                return true;
        }
        stack[v] = false;
        return false;
    }
}
bool Graph::iscyclic()
{
    bool *visited = new bool[V];
    bool *recStack = new bool[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }
    for (auto i = 0; i < V; i++)
    {
        if (iscyc(i, visited, recStack))
            return true;
        return false;
    }
}
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    // g.addEdge(0, 2);
    g.addEdge(1, 2);
    // g.addEdge(2, 0);
    g.addEdge(2, 3);
    // g.addEdge(3, 3);

    if (g.iscyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;
}