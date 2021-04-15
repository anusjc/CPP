#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n, c = 0;
    cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {

        if (a[i] == a[i + 1] && a[i] > 0)
        {
            c++;
            a[i] = -1;
            a[i + 1] = -1;
        }
    }
    // cout << c;
    cout << c;
}