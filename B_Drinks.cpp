#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    float su = 0;
    double ans;
    cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        a.push_back(m);
        su += m;
    }
    ans = su / n;
    cout << fixed << setprecision(12) << ans;
}