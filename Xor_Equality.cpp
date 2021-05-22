#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll extram(int a)
{
    int s = (a % 1000000007 + 1000000007) % 1000000007;
    return s;
}
ll mdl(int a, int n)
{
    ll tem = 1;

    while (n > 0)
    {
        int last_bit = (n & 1);
        if (last_bit)
            tem = ((tem) * (a));
        tem = extram(tem);
        a = ((a) * (a));
        a = extram(a);
        n = n >> 1;
    }
    return tem;
}
// ll mdl(int a, int n, int c)
// {
//     int tem = 1;

//     while (n > 0)
//     {
//         int last_bit = (n & 1);
//         if (last_bit)
//             tem = ((tem % 1000000007) * (a % 1000000007)) % 1000000007;
//         a = ((a % 1000000007) * (a % 1000000007)) % 1000000007;
//         n = n >> 1;
//     }
//     return tem;
// }
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << mdl(2, n - 1) << "\n";
    }
}