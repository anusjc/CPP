#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    priority_queue<int, vector<int>, greater<int>> p;
    ll n;
    cin >> n;
    while (n--)
    {
        ll m;
        cin >> m;
        p.push(m);
    }

    while (p.empty() == false)
    {
        cout << p.top() << " ";
        p.pop(); /* code */
    }
}