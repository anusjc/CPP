#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, cnt = 0;
    cin >> n;
    // string s = to_string(n);
    // for (auto i = 0; i < s.length(); i++)
    // {
    //     if (s[i] == '4' or s[i] == '7')
    //     {
    //         cnt++;
    //     }
    // }
    while (n)
    {

        ll lst = n % 10;
        if (lst == 7 or lst == 4)
        {
            cnt++;
        }
        n = n / 10;
    }
    if (cnt == 4 or cnt == 7)
    {
        cout << "YES";
    }
    else
    {
        /* code */
        cout << "NO";
    }
}