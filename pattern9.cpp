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
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= i; j++)
            {
                if (i % 2 == 0)
                {
                    cout << "?";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
}