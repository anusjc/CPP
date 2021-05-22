#include <bits/stdc++.h>
using namespace std;
int vis[2001], col[2001];
vector<int> ar[2001];
bool dfs(int n, int c)
{
    vis[n] = 1;
    col[n] = c;
    for (auto child : ar[n])
    {
        if (vis[child] == 0)
        {
            if (dfs(child, c ^ 1) == false)
                return false;
        }
        else if (col[n] == col[child])
            return false;
    }
    return true;
}
int main()
{
    int t, n, m, a, b;
    cin >> t;
    for (auto i = 1; i <= t; i++)
    {
        cin >> n >> m;
        for (auto i = 1; i <= n; i++)
            ar[i].clear(), vis[i] = 0;
        for (auto j = 1; j <= m; j++)
        {
            cin >> a >> b;
            ar[a].push_back(b);
            ar[b].push_back(a);
        }
        bool flag = true;
        for (auto i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                bool res = dfs(i, 0);
                if (res == false)
                {
                    flag = false;
                }
            }
        }
        cout << "Scenario #" << i << ":"
             << "\n";
        if (flag == true)
        {

            cout << "No suspicious bugs found!"
                 << "\n";
        }
        else
        {
            cout << "Suspicious bugs found!"
                 << "\n";
        }
    }
}