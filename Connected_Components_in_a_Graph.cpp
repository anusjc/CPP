#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> adj[100001];
ll vis[100001];
void dfs(ll node)
{
    vis[node] = 1;
    for (ll child : adj[node])
    {
        if (!vis[child])
            dfs(child);
    }
}
int main()
{
    ll n, m, a, b;
    cin >> n >> m;
    for (ll i = 1; i <= m; i++)
    {
        cin >> a >> b, adj[a].push_back(b), adj[b].push_back(a);
    }
    ll cc = 0;
    for (int i = 1; i <= n; i++)
        if (!vis[i])
            dfs(i), cc++;
    cout << cc;
}
// vector<int> ar[100001];
// int vis[100001];

// void dfs(int node)
// {
//     vis[node] = 1;

//     for (int child : ar[node])
//         if (!vis[child])
//             dfs(child);
// }

// int main()
// {
//     int n, m, a, b;
//     cin >> n >> m;

//     for (int i = 1; i <= m; i++)
//         cin >> a >> b, ar[a].push_back(b), ar[b].push_back(a);

//     int cc = 0;

//     for (int i = 1; i <= n; i++)
//         if (!vis[i])
//             dfs(i), cc++;

//     cout << cc;
// }