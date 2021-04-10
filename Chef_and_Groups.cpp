#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll cnt = 0;
        //Now we will itterate over the string and find  1 in the String and them start to find all the consecutive 1's present
        // the Counter by one till the 0 is encountered.
        // for (ll i = 0; i < s.length(); i++)
        ll i = 0;
        while (i < s.length())
        {
            if (s[i] == '1')
            {
                cnt++;
                ll j = i;
                while (s[j] != '0' and j < s.length())
                {
                    j++;
                }
                i = j;
            }
            else
            {
                i++;
            }
        }
        // for (ll i = 0; i < s.length(); i++)
        // {
        //     if (s[i] == '1')
        //     {
        //         cnt++;
        //         ll j = i;
        //         while (j < s.length())
        //         {
        //             if (s[j] == '1')
        //             {
        //                 j++;
        //             }
        //             else
        //             {
        //                 break;
        //             }
        //         }

        //         i = j;
        //     }
        // }

        cout << cnt << "\n";
    }
}