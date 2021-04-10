#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, h, x;
    cin >> n >> h >> x;
    vector<ll> t;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        t.push_back(m);
    }
    ll mx = *max_element(t.begin(), t.end());
    if (x + mx >= h)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}