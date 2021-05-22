#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int lcs(string s1, string s2)
{
    ll n = s1.length();
    ll m = s2.length();
    int L[m + 1][n + 1];
    for (ll i = 0; i <= m; i++)
    {
        for (ll j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                L[i][j] = 1 + L[i - 1][j - 1];
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }
    return L[m][n];
}
int longestCommonSubsequence(string text1, string text2)
{
    int m = text1.length();
    int n = text2.length();
    int L[m + 1][n + 1];
    int i, j;
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
            }
            else if (text1[i - 1] == text2[j - 1])
            {
                L[i][j] = 1 + L[i - 1][j - 1];
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }
    return L[m][n];
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << longestCommonSubsequence(s1, s2);
    cout << lcs(s1, s2);
}