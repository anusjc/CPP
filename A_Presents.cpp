#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> ans(n, 0), a;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    for (ll i = 0; i < n; i++)
    {
        ans[a[i] - 1] = i + 1;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}