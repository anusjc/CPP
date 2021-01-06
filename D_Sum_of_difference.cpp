#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll sumPairs(vector<ll> arr, ll n)
{
    sort(arr.begin(), arr.end());
    ll sum = 0;
    for (ll i = n - 1; i >= 0; i--)
        sum += i * arr[i] - (n - 1 - i) * arr[i];
    return sum;
}
int main()
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

    cout << sumPairs(a, n);
}