#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> a;
    for (auto i = 0; i < 5; i++)
    {
        vector<int> b;
        for (auto j = 0; j < 5; j++)
        {
            int m;
            cin >> m;
            b.push_back(m);
        }
        a.push_back(b);
    }
    int pi, pj;
    for (auto i = 0; i < 5; i++)
    {
        for (auto j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                pi = i;
                pj = j;
            }
            // cout << a[i][j] << " ";
        }
    }
    // cout << pi << " " << pj;
    cout << (abs(2 - pi) + abs(2 - pj));
}