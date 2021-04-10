#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    // vector<vector<char>> ar;
    ll t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        ll sc = 1;
        for (ll i = n; i >= 1; i--)
        {
            for (ll j = 1; j <= i; j++)
            {
                cout << j;
            }
            cout << endl;
        }
        // for (ll j = 0; j < m)
    }
}