#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, d, ans = 0;
        cin >> n >> k >> d;
        ll su = 0;
        // vector<ll> a;
        for (ll i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            su = su + m;
            // a.push_back(m);
        }
        ans = su / k;
        ans = min(ans, d);
        cout << ans << '\n';
    }
}