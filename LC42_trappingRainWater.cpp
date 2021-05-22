#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int trap(vector<int> &height)
{
    int n = height.size();
    int sum, left, right = 0;
    for (auto i = 1; i < n - 1; i++)
    {
        left = height[i];
        for (auto j = 0; j < i; j++)
        {
            left = max(left, height[j]);
        }
        right = height[i];
        for (auto j = i + 1; j < n; j++)
        {
            right = max(right, height[j]);
        }
        sum += min(left, right) - height[i];
    }
    return sum;
}
int main()
{
    ll n;
    cin >> n;
    vector<int> arr;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        arr.push_back(m);
    }
    cout << trap(arr);
}