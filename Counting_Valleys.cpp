#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n, v = 0;
    cin >> n;
    string s;
    cin >> s;
    ll lvl = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'D')
        {
            lvl--;
        }
        if (s[i] == 'U')
        {
            lvl++;
        }
        if (lvl == 0 and s[i] == 'U')
        {
            v++;
        }
    }
    cout << v;
}