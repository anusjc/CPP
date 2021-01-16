#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    vector<ll> a;
    while (t > 1)
    {
        a.push_back(t);
        if (t % 2 == 0)
        {
            t = t / 2;
        }
        else
        {
            t = (t * 3) + 1;
        }
    }
    a.push_back(1);
    for (ll i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}