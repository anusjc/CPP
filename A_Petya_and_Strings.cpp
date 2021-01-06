#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int c = 0;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int l = a.length();
    for (auto i = 0; i < l; i++)
    {
        if (a[i] > b[i])
        {
            cout << "1";
            // cout << a[i] << b[i];
            c = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            cout << "-1";
            c = 1;
            break;
        }
    }
    if (c == 0)
        cout << "0";
}