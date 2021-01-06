#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<ll> a;
    while (n--)
    {
        ll m;
        cin >> m;
        a.push_back(m);
    }
    ll su = accumulate(a.begin(), a.end(), 0);
    if (su > 0)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
}