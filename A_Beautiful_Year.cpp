#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    while (true)
    {
        n += 1;
        ll a = (n / 1000);
        ll b = (n / 100) % 10;
        ll c = (n / 10) % 10;
        ll d = n % 10;
        if (a != b and a != c and a != d and b != c and b != d and c != d)
        {
            break;
        }
    }
    cout << n;
}