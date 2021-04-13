#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool inRange(int low, int high, int x)
{
    return ((x - high) * (x - low) <= 0);
}
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a, b;
    cin >> a >> b;
    ll apple, orange;
    cin >> apple >> orange;
    vector<int> app, oran;
    ll cnt_apple = 0, cnt_orange = 0;
    for (auto i = 0; i < apple; i++)
    {
        ll ap;
        cin >> ap;
        app.push_back(a + ap);
    }
    for (auto j = 0; j < orange; j++)
    {
        ll ora;
        cin >> ora;
        oran.push_back(b + ora);
    }
    for (auto i = 0; i <= apple; i++)
    {
        if (app[i] >= n and app[i] <= m)
        {
            cnt_apple++;
        }
    }
    for (auto j = 0; j <= orange; j++)
    {
        if (oran[j] >= n and oran[j] <= m)
        {
            cnt_orange += 1;
        }
        // cout << oran[j] << " ";
    }
    cout << cnt_apple << "\n"
         << cnt_orange;
}
