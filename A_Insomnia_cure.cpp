#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    ll cnt = 0, ans = 0;
    ll i = 0;
    while (i < s.length())
    {
        if (s[i] == '*')
        {
            // cnt++;
            ll j = i;
            cnt = 0;
            while (s[j] == '*' and j < s.length())
            {
                cnt++;
                j++;
            }
            ans = max(ans, cnt);
            // cnt = j;
            i = j;
        }
        else
        {
            i++;
        }
    }
    cout << ans;
}