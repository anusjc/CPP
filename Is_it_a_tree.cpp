#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> ar[10001];
ll vis[10001], dist[10001];
void dfs(int node)
{
    vis[node] = 1;
    for (int child : ar[node])
        if (vis[child] == 0)
        {
            dfs(child);
        }
}
int main()
{
    ll n, m, a, b;
    cin >> n >> m;
    ;
    for (ll i = 0; i < m; i++)
    {
        cin >> a >> b, ar[a].push_back(b), ar[b].push_back(a);
    }
    // dfs(1, 0);
    ll cc_count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (vis[i] == 0)
            dfs(i), cc_count++;
    }
    if (cc_count == 1 && m == n - 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    // cout << cc_count;
    return 0;
}
