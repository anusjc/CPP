#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    ll r;
    cin >> r;
    ll su = accumulate(a.begin(), a.end(), 0);
    ll res = (su - a[m]) / 2;
    // cout << res;
    if (res == r)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << abs(res - r);
    }
}