#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int count = 0;
        while (n > 0)
        {
            count++;
            n = n & (n - 1);
        }
        cout << count << "\n";
    }
}