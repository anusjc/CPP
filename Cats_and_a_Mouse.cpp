#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        if (abs(z - x) > abs(z - y))
        {
            cout << "Cat B"
                 << "\n";
        }
        else if (abs(z - x) < abs(z - y))
        {
            cout << "Cat A"
                 << "\n";
        }
        else
        {
            cout << "Mouse C"
                 << "\n";
        }
    }
}