#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, a, b;
        cin >> x >> a >> b;
        cout << 10 * (a + (100 - x) * b) << "\n";
    }
}