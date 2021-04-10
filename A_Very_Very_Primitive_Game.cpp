#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (c == 0)
    {
        if (a >= b + 1)
        {

            {
                cout << "Takahashi" << endl;
            }
        }
        else
        {
            cout << "Aoki" << endl;
        }
    }

    else
    {
        if (b >= a + 1)
        {
            cout << "Aoki" << endl;
        }
        else
        {
            cout << "Takahashi" << endl;
        }
    }
}