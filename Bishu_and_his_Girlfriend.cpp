#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> ar[10001];
ll vis[10001], dist[10001];
void dfs(int node, int d)
{
    vis[node] = 1;
    dist[node] = d;
    for (ll child : ar[node])
        if (vis[child] == 0)
            dfs(child, dist[] + 1);
}
int main()
{
    ll n, q, a, b;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b, ar[a].push_back(b), ar[b].push_back(a);
    }
    dfs(1, 0);
    cin >> q;
    int ans = -1, min_dist = INT_MAX;
    while (q--)
    {
        ll girl_city;
        cin >> girl_city;

        if (dist[girl_city] < min_dist)
            min_dist = dist[girl_city], ans = girl_city;

        else if (dist[girl_city] == min_dist && girl_city < ans)
            ans = girl_city;
    }
    cout << ans;
}
