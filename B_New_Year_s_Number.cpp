#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int countNumbers(int X, int N)
{

    int divisibleByX = N / X;

    return divisibleByX;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n >= 2020)
        {
            if (n % 2020 == 0 or n % 2021 == 0)
            {
                cout << "YES"
                     << "\n";
            }
            else if ((n - 2020) % 2021 == 0 or (n - 2021) % 2020 == 0)
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
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}
