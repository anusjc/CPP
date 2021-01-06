#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, bb, n = 0;
    cin >> b >> bb;
    while (b <= bb)
    {
        b = 3 * b;
        bb = 2 * bb;
        n++;
    }
    cout << n;
}