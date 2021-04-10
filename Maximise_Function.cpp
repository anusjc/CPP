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
        vector<ll> a;
        for (ll i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            a.push_back(m);
        }
        sort(a.begin(), a.end());
        cout << (abs(a[0] - a[1]) + abs(a[1] - a[n - 1]) + abs(a[n - 1] - a[0])) << endl;
    }
}