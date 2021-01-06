#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, an = 0, da = 0;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            an++;
        }
        else
        {
            da++;
        }
    }
    if (an > da)
    {
        cout << "Anton";
    }
    else if (an == da)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }
}