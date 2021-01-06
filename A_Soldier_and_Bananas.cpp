#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, t, nm, sum = 0, a;
    cin >> m >> t >> nm;
    a = m;
    for (auto i = 1; i <= nm; i++)
    {
        sum += a;
        a += m;
        //cout << sum << " " << a << "\n";
    }
    //cout << sum;
    cout << max(0, sum - t);
}