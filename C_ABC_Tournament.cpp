#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> a, a_c, bc;
    map<ll, ll> m;
    for (ll i = 0; i < pow(2, n); i++)
    {
        ll m;
        cin >> m;
        a.push_back(m);
    }
    for (ll i = 0; i < pow(2, n); i++)
    {
        m[a[i]] = i + 1;
    }
    while (a.size() > 2)

    {

        vector<ll> bc;
        for (ll i = 0; i < a.size(); i += 2)
        {
            if (a[i] > a[i + 1])
            {
                bc.push_back(a[i]);
            }
            else
            {
                bc.push_back(a[i + 1]);
            }
        }
        a = bc;
    }
    cout << m[min(a[0], a[1])];
}