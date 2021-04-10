#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int no_of_strongwords(string s, int n)
{
    ll cnt = 0, ans = 0;
    ll i = 0;
    while (i < n)
    {
        if (s[i] == '*')
        {
            // cnt++;
            ll j = i;
            cnt = 0;
            while (s[j] == '*' and j < n)
            {
                cnt++;
                j++;
            }
            ans = max(ans, cnt);
            i = j;
        }
        else
        {
            i++;
        }
    }
    return ans;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (no_of_strongwords(s, n) >= k)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
        // cout << no_of_strongwords(s, n) << " ";
    }
}