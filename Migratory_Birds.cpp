#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    vector<ll> a, freq_a(6, 0);
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    for (ll i = 0; i < n; i++)
    {
        freq_a[a[i]] += 1;
    }
    ll mx = *max_element(freq_a.begin(), freq_a.end());

    for (ll i = 1; i <= freq_a.size(); i++)
    {
        if (freq_a[i] == mx)
        {
            cout << i;
            break;
        }
    }
}