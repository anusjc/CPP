#include <bits/stdc++.h>
using namespace std;
int sod(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int t;
    vector<int> a;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (auto i = 9; i > 0; i--)
        {
            if (n < i)
            {
                cout << n;
            }
            else if ()
            {
            }
        }
    }
}