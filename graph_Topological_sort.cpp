#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    vector<int> *adj;
    void topo(int v, bool visited[], stack<int> s);

public:
    Graph(int V);
    void addEdge(int u, int w);
    void topological_sort();
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
}
void Graph::addEdge(int u, int w)
{
    adj[u].push_back(w);
}
