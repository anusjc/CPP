#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c1 = 0, c2 = 0, c3 = 0;
    for (auto i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            c1++;
        }
        else if (s[i] == '2')
        {
            c2++;
        }
        else if (s[i] == '3')
        {
            c3++;
        }
    }
    vector<string> a;
    for (auto i = 0; i < c1; i++)
    {
        a.push_back("1");
        a.push_back("+");
    }
    for (auto i = 0; i < c2; i++)
    {
        a.push_back("2");
        a.push_back("+");
    }
    for (auto i = 0; i < c3; i++)
    {
        a.push_back("3");
        a.push_back("+");
    }
    a.pop_back();
    for (auto i = 0; i < a.size(); i++)
    {
        cout << a.at(i);
    }
}