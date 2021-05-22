#include <bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int cc_size;
void dfs(int node)
{
    vis[node] = 1;
    cc_size++;
    for (auto child : ar[node])
    {
        if (vis[child] == 0)
            dfs(child);
    }
}
int main()
{
    int t, n, m, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (auto i = 1; i <= n; i++)
            vis[i] = 0, ar[i].clear();
        for (auto j = 1; j <= m; j++)
        {
            cin >> a >> b;
            ar[a].push_back(b), ar[b].push_back(a);
        }
        int cnt = 0;
        int res = 1;
        for (auto i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                cc_size = 0;
                dfs(i), cnt++;
                res = (res * cc_size) % 1000000007;
            }
        }
        cout << cnt << " " << res << "\n";
        // cout << cnt;
    }
}