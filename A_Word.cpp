#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    ll l = 0, u = 0;
    cin >> s;
    for (ll i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u <= s.length() / 2)
    {
        for (ll i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (ll i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
}