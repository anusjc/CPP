#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p1, p2;
        vector<int> a, b;
        cin >> n;
        for (auto i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            a.push_back(m);
        }
        p1 = 0;
        p2 = n - 1;
        while (p1 < p2)
        {
            cout << a.at(p1++) << " ";
            cout << a.at(p2--) << " ";
        }
        if (n & 1)
        {
            cout << a.at(n / 2);
        }
        cout << "\n";
    }
}