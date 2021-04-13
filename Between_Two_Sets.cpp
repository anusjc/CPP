#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, m, cnt = 0;
    cin >> n >> m;
    vector<int> a, b;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    for (ll j = 0; j < m; j++)
    {
        ll c;
        cin >> c;
        b.push_back(c);
    }
    for (ll i = 1; i <= 100; i++)
    {
        bool aa = true, bb = true;
        for (ll j = 0; j < n; j++)
        {
            if (i % a[j] != 0)
            {
                aa = false;
                break;
            }
        }
        for (ll k = 0; k < m; k++)
        {
            if (b[k] % i != 0)
            {
                bb = false;
                break;
            }
        }
        if (aa and bb)
        {
            cnt++;
        }
    }
    cout << cnt;
}
// int main()
// {
//     ll n, m;
//     cin >> n >> m;
//     ll a[n], b[m];
//     for (ll i = 0; i < n; i++)
//         cin >> a[i];
//     for (ll i = 0; i < m; i++)
//         cin >> b[i];
//     ll c = 0;
//     for (ll i = 1; i <= 100; i++)
//     {
//         bool ha = true, haa = true;
//         for (ll j = 0; j < n; j++)
//         {
//             if (i % a[j] != 0)
//             {
//                 ha = false;
//                 break;
//             }
//         }
//         for (ll j = 0; j < m; j++)
//         {
//             if (b[j] % i != 0)
//             {
//                 haa = false;
//                 break;
//             }
//         }
//         if (ha && haa)
//         {
//             c++;
//         }
//     }
//     cout << c;
//     return 0;
// }