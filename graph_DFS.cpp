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
// This Functon is the iterative method of Depth First Search
void dfs(vector<int> adj[], int s, int V)
{
    vector<bool> visited(V, false);
    stack<int> stack;
    stack.push(s);
    while (!stack.empty())
    {
        s = stack.top();
        stack.pop();
        if (!visited[s])
        {
            cout << s;
            visited[s] = true;
        }
        for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!visited[*i])
                stack.push(*i);
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
    dfs(adj, 0, v);
}