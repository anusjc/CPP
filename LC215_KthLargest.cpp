#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    // priority_queue(int,vector<int>,greater<int>> minh);
    priority_queue<int, vector<int>, greater<int>> minh;
    for (auto i = 0; i < nums.size(); i++)
    {
        minh.push(nums[i]);
        if (nums.size() > k)
        {
            minh.pop();
        }
    }
    return minh.top();
}
int main()
{
    vector<int> a = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << findKthLargest(a, k);
}