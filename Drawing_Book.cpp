#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, m;
    cin >> n >> m;
    cout << min(m / 2, (n / 2 - m / 2));
}