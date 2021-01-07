#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string a, b, ans = "";
    cin >> a >> b;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            ans += "0";
        }
        else
        {
            ans += "1";
        }
    }
    cout << ans;
}