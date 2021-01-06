#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, d, r = 0, nr = 0;
        cin >> l >> d;
        d = (double)d;
        vector<int> a;
        for (auto i = 0; i < l; i++)
        {
            int m;
            cin >> m;
            a.push_back(m);
        }
        for (auto i = 0; i < a.size(); i++)
        {
            if (a[i] >= 80 or a[i] <= 9)
            {
                r++;
            }
            else
            {
                nr++;
            }
        }
        // int xxx = (double)();
        // int yyy = (double)();
        cout << ceil(r / (double)d) + ceil(nr / (double)d) << "\n";
    }
}