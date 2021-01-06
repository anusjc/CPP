#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a, b;
        for (ll i = 0; i < n; i++)
        {
            ll l;
            cin >> l;
            a.push_back(l);
        }
        for (ll i = 0; i < m; i++)
        {
            ll k;
            cin >> k;
            b.push_back(k);
        }
        ll s1 = 0, s2 = 0;
        s1 = accumulate(a.begin(), a.end(), 0);
        s2 = accumulate(b.begin(), b.end(), 0);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        ll cnt = 0;
        if (s1 > s2)
        {
            cout << 0 << "\n";
        }
        else
        {
            ll i = 0, j = 0;
            while (s1 <= s2 and i < n and j < m)
            {
                s1 += b[j];
                s1 -= a[i];
                s2 += a[i];
                s2 -= b[j];
                i++;
                j++;
                cnt++;
            }
            if (s1 <= s2)
            {
                cout << "-1"
                     << "\n";
            }
            else
            {
                cout << cnt << "\n";
            }
        }
    }
    return 0;
}
