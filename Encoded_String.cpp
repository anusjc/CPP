#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string z = "abcdefghijklmnop";
        ll n;
        cin >> n;
        string s;
        cin >> s;
        for (ll i = 0; i < n; i += 4)
        {
            string ans = z;
            ll len = ans.length();
            string s1 = s.substr(i, i + 4);
            // cout << "HII" + ans << endl;
            if (s1[0] == '0')
            {
                ans = ans.substr(0, (len / 2));
            }
            else
            {
                ans = ans.substr((len / 2), len);
            }
            // cout << ans << endl;
            len = ans.length();
            if (s1[1] == '0')
            {
                ans = ans.substr(0, (len / 2));
            }
            else
            {
                ans = ans.substr((len / 2), len);
            }
            // cout << ans << endl;
            len = ans.length();
            if (s1[2] == '0')
            {
                ans = ans.substr(0, (len / 2));
            }
            // len=ans.length();
            else
            {
                ans = ans.substr((len / 2), len);
            }
            // cout << ans << endl;
            len = ans.length();
            if (s1[3] == '0')
            {
                ans = ans.substr(0, (len / 2));
            }
            else
            {
                ans = ans.substr((len / 2), len);
            } // ll x = binaryToDecimal(stoi(s1));
            // ans += 'a' + x;
            cout << ans;
        }
        cout << "\n";
    }
}