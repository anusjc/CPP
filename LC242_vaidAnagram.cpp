#include <bits\stdc++.h>
using namespace std;
bool isAnagram(string str1, string str2)
{
    int counts[256] = {0};
    for (auto i = 0; i < str1.size(); i++)
    {
        counts[str1[i]]++;
    }
    for (auto i = 0; i < str2.size(); i++)
    {
        counts[str2[i]]--;
    }
    for (auto i : counts)
    {
        if (i != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (isAnagram(s1, s2))
    {
        cout << "Yes is an Anagram:)";
    }
    else
    {
        cout << "Not an Anagram:(";
    }
}