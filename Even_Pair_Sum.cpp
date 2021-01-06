#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, ao, ae, be, bo;
        cin >> a >> b;
        ae = a / 2;
        ao = a - ae;
        be = b / 2;
        bo = b - be;
        cout << (ao * bo + ae * be) << "\n";
    }
}