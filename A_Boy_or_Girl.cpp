#include <bits/stdc++.h>
using namespace std;
int countDistinct(string s)
{

    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    return m.size();
}
int main()
{
    string s;
    cin >> s;
    int c = countDistinct(s);
    if (c % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}