#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p = 0, e = 0;
        cin >> n;
        string s;
        cin >> s;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                p++;
            }
            else
            {
                e++;
            }
        }

        if ((p + (120 - n)) / 120.0 * 100 >= 75)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}