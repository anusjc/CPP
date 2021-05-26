#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
{
    vector<vector<int>> ans;
    priority_queue<pair<int, pair<int, int>>> maxH;
    for (auto i = 0; i < points.size(); i++)
    {
        maxH.push({points[i][0] * points[i][0] + points[i][1] * points[i][1], {points[i][0], points[i][1]}});
        if (maxH.size() > k)
        {
            maxH.pop();
        }
    }
    while (maxH.size() > 0)
    {
        pair<int, int> p = maxH.top().second;
        vector<int> an;
        an.push_back(p.first);
        an.push_back(p.second);
        ans.push_back(an);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a;
    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    int k;
    cin >> k;
    kClosest(a, k);
}