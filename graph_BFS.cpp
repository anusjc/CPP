#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    // adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int V)
{
    for (auto v = 0; v < V; ++v)
    {
        cout << "\n Adj. List of " << v << "\n Head ";
        for (auto x : adj[v])
            cout << "->" << x;
        cout << "\n";
    }
}
void bfs(vector<int> adj[], int start, int V)
{
    vector<bool> visited(V, false);
    int u;
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty())
    {
        u = q.front();
        cout << u;
        q.pop();
        for (auto v = 1; v <= V; v++)
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
int main()
{
    int v = 5;
    vector<int> adj[v];
    addEdge(adj, 1, 0);
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 1);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 4);

    // printGraph(adj, v);
    bfs(adj, 2, v);
}