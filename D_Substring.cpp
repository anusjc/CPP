///God help me.
#include <bits/stdc++.h>

using namespace std;

int beauty(int n, int m, string s, vector<int> x, vector<int> y)
{
    int d[n + 1], f[n + 1][26];
    int ans = 0;
    queue<int> q;
    vector<int> g[n + 1];
    int i, j, u, v, rem;
    rem = n;

    for (i = 0; i < m; ++i)
    {
        u = x[i];
        v = y[i];
        --u;
        --v;
        g[u].push_back(v);
        ++d[v];
    }
    for (i = 0; i < n; ++i)
        if (!d[i])
        {
            q.push(i);
            f[i][s[i] - 'a'] = 1;
        }

    while (!q.empty())
    {
        u = q.front();
        q.pop();
        --rem;

        for (int e : g[u])
        {
            for (j = 0; j < 26; ++j)
                f[e][j] = max(f[e][j], f[u][j] + (s[e] - 'a' == j));

            --d[e];
            if (!d[e])
                q.push(e);
        }
    }
    if (rem)
    {
        return -1;
    }

    for (i = 0; i < n; ++i)
        for (j = 0; j < 26; ++j)
            ans = max(ans, f[i][j]);

    return ans;
}
int main()
{
    vector<int> x = {1, 3, 2, 5, 4, 6};
    vector<int> y = {2, 1, 3, 4, 3, 4};
    string s = "xzyabc";
    cout << beauty(6, 6, s, x, y);
    return 0;
}