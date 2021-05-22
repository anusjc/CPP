#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void sortColors(vector<ll> &nums)
{
    ll low = 0, mid = 0, high = nums.size();
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low++], nums[mid++]);
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high--]);
        }
    }
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        arr.push_back(m);
    }
}