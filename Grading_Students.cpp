#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        if (m < 38)
        {
            cout << m << "\n";
        }
        else
        {
            ll k = (m % 10) > 5 ? 10 - (m % 10) : 5 - (m % 10);
            if (k < 3)
            {
                cout << m + k << "\n";
            }
            else
            {
                cout << m << "\n";
            }
        }
    }
}