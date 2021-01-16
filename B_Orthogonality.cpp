#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        a.push_back(m);
    }
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        b.push_back(k);
    }
    for (ll i = 0; i < n; i++)
    {
        ans += a[i] * b[i];
    }
    if (ans == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}