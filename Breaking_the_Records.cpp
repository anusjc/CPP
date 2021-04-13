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
    ll mx = a[0], mn = a[0], cnt_mx = 0, cnt_mn = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            cnt_mx++;
        }
        if (a[i] < mn)
        {
            mn = a[i];
            cnt_mn++;
        }
    }
    cout << cnt_mx << " " << cnt_mn;
}