#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t, a = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
        {
            a++;
        }
        else
        {
            a--;
        }
    }
    cout << a << "\n";
}
