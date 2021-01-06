#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n, k, c = 0;
    cin >> n >> k;
    vector<int> a;
    for (auto i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        a.push_back(m);
    }
    // c = a[k - 1];

    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1] and a[i] > 0)
        {
            cnt++;
        }
    }
    cout << cnt;
}