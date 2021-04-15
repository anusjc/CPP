#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    ll d, m, cnt = 0;
    cin >> d >> m;
    for (ll i = 0; i < n; i++)
    {
        ll k = m, su = 0, j = i;
        //This to calcuate the sum of the Subarray
        while (k--)
        {
            su += a[j];
            j++;
        }
        if (su == d)
        {
            cnt++;
        }
    }
    cout << cnt;
}