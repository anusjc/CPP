#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll budget, no_of_kb, no_of_usb, price = -1;
    cin >> budget >> no_of_kb >> no_of_usb;
    vector<ll> kb, usb;
    for (ll i = 0; i < no_of_kb; i++)
    {
        ll k;
        cin >> k;
        kb.push_back(k);
    }
    for (ll i = 0; i < no_of_usb; i++)
    {
        ll k;
        cin >> k;
        usb.push_back(k);
    }
    // sort(kb.begin(), kb.end(), greater<ll>());
    // sort(usb.begin(), usb.end(), greater<ll>());
    for (ll i = 0; i < no_of_kb; i++)
    {
        for (ll j = 0; j < no_of_usb; j++)
        {
            if (kb[i] + usb[j] <= budget)
                price = max(price, kb[i] + usb[j]);
        }
    }
    cout << price;
}