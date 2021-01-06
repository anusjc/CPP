#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == '2' and s[1] == '0' and s[2] == '2' and s[3] == '0')
        {
            cout << "YES"
                 << "\n";
        }
        else if (s[n - 1] == '0' and s[n - 2] == '2' and s[n - 3] == '0' and s[n - 4] == '2')
        {

            cout << "YES"
                 << "\n";
        }
        else if (s[0] == '2' and s[1] == '0' and s[n - 2] == '2' and s[n - 1] == '0')
        {
            cout << "YES"
                 << "\n";
        }
        else if (s[0] == '2' and s[n - 3] == '0' and s[n - 2] == '2' and s[n - 1] == '0')
        {
            cout << "YES"
                 << "\n";
        }
        else if (s[0] == '2' and s[1] == '0' and s[2] == '2' and s[n - 1] == '0')
        {
            cout << "YES"
                 << "\n";
        }

        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}