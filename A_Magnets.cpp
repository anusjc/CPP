#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, cnt = 1;
    cin >> n;
    vector<ll> a;
    while (n--)
    {
        ll m;
        cin >> m;
        a.push_back(m);
    }
    for (ll i = 0; i < a.size() - 1; i++)
    {
        if (a[i] % 10 == a[i + 1] / 10)
        {
            cnt++;
        }
    }
    cout << cnt;
}