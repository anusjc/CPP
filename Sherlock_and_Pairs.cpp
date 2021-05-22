#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(1000007, 0);
        for (ll i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            a[k] += 1;
        }
        ll cnt = 0;
        for (ll i = 1; i <= 1000000; i++)
        {
            if (a[i] >= 2)
            {
                cnt += (ll)a[i] * (ll)(a[i] - 1);
            }
        }
        cout << cnt << "\n";
    }
}