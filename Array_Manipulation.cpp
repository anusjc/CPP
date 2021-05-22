#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n + 2, 0);

    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        l = l - 1, r = r - 1;
        a[l] += k;
        a[r + 1] += -1 * k;
    }
    ll maxx = 0;
    for (ll i = 1; i < n + 2; i++)
    {
        a[i] += a[i - 1];
        maxx = max(maxx, a[i]);
    }
    cout << maxx;
}