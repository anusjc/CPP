#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, a, b, sum = 0;
    vector<ll> ab;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        ll temp = b - a;
        sum += temp;
        ab.push_back(sum);
    }
    cout << *max_element(ab.begin(), ab.end());
}