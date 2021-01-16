#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    vector<ll> v;
    ll ans = 0;
    for (ll i = 0; i < 4; i++)
    {
        ll k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i + 1])
        {
            ans++;
        }
    }
    cout << ans;
}