#include <bits/stdc++.h>
using namespace std;
int nth_ele(vector<int> a, int n)
{
   nth_element(a.begin(), a.begin() + n, a.end(), greater<int>());
   return a[n - 1];
}
int main()
{
   int n, d;
   cin >> n;
   vector<int> a;
   for (auto i = 0; i < n; i++)
   {
      int m;
      cin >> m;
      a.push_back(m);
   }
   cin >> d;

   cout << nth_ele(a, d) << "\n";
}