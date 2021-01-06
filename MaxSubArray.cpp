#include<bits/stdc++.h>
using namespace std;
// int maxSubArraySum(vector<int> a, int size) 
// { 
//     int max_so_far = INT_MIN, max_ending_here = 0; 
  
//     for (int i = 0; i < size; i++) 
//     { 
//         max_ending_here = max_ending_here + a.at(i); 
//         if (max_so_far < max_ending_here) 
//             max_so_far = max_ending_here; 
  
//         if (max_ending_here < 0) 
//             max_ending_here = 0; 
//     } 
//     return max_so_far; 
// } 
int maxSubArraySum(vector<int> a, int size) 
{
    int max_current=0;
    int max_global=INT_MIN;
    for(auto i:a)
    {
        max_current=max(i,max_current+i);
        if(max_current>max_global)
            max_global=max_current;
    }
    return max_global;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(auto i=0;i<n;i++)
    {
        int m;
        cin>>m;
        a.push_back(m);
    }
    int max=maxSubArraySum(a,n);
    cout<<max;
} 