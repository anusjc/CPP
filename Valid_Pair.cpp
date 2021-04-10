#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == b or b == c or a == c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}