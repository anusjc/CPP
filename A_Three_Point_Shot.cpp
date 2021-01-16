#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, m, ans;
    cin >> n >> m;
    // ans=min(n,m);
    if (n > m)
    {
        m += 3;
        if (m > n)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else
    {
        n += 3;
        if (n > m)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}