#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, sum = 0, sum1 = 0;
    vector<ll> a;
    cin >> n;
    for (ll i = 0; i < n - 1; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
        sum += k;
    }
    sum1 = (n * (n + 1)) / 2;

    cout << abs(sum1 - sum);
    // cout << sum << " " << sum1;
}