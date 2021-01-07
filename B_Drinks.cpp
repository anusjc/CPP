#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, su = 0;
    cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        a.push_back(m);
        su += m;
    }
    cout << setprecision(15) << fixed << su / n;
}