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
    ll n = t;
    while (t--)
    {
        ll a;
        cin >> a;
        if (countNumbers(n, a))
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
    return 0;
}
