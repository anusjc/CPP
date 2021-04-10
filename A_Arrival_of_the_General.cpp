#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    ll mi = *min_element(a.begin(), a.end());
    ll mx = *max_element(a.begin(), a.end());
    // cout << mi << " " << mx;
    ll i, j, mi_in, mx_in;
    for (i = 0; i < n; i++)
    {
        if (a[i] == mi)
        {
            mi_in = i;
        }
    }
    for (j = n - 1; j >= 0; j--)
    {
        if (a[j] == mx)
        {
            mx_in = j;
        }
    }
    // cout << mi_in << " " << mx_in;
    ll res = 0;
    if (mx_in < mi_in)
    {
        res = mx_in + (n - 1) - mi_in;
    }
    if (mx_in > mi_in)
    {
        mx_in--;
        res = mx_in + ((n - 1) - mi_in);
    }
    cout << res;
}