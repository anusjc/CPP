#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s, s1;
    cin >> s >> s1;
    reverse(s.begin(), s.end());
    if (s == s1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}