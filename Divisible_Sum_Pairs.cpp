#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, k, cnt = 0;
    cin >> n >> k;
    vector<ll> a, ans;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) % k == 0)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}