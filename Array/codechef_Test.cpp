#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ao = 0, ae = 0, be = 0, bo = 0;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            ae = a / 2;
            ao = a / 2;
        }
        else
        {
            ae = floor(a / 2.0);
            ao = ceil(a / 2.0);
        }
        cout << ae << " " << ao;
        // cout << (ao * bo + ae * be) << "\n";
    }
}
