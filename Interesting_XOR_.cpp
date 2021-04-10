#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll c;
        cin >> c;
        vector<pair<ll, ll>> v;
        ll d = 1;
        while (c > pow(2, d))
        {
            d++;
        }
        // cout << d;
        ll x = pow(2, d);
        // cout << x << ' ';

        for (ll i = 0; i < x; i++)
        {
            for (ll j = 0; j < x; j++)
            {

                if ((i ^ j) == c)
                {
                    v.push_back({i, j});
                }
            }
        }
        // cout << *max_element(v.begin(), v.end()) << "\n";
        cout << '\n';
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i].first << "  " << v[i].second << "\n";
        }
        cout << "\n";
    }
}