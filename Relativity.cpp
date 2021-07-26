#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        ll g{}, c{};
        cin >> g >> c;
        ll pow = c * c;
        g = g * 2;
        pow = pow / g;
        cout << pow << "\n";
    }
}