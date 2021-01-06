#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a,ans;
    for(auto i=0;i<n;i++)
    {
        int m;
        cin>>m;
        a.push_back(m);
    }
    int target;
    cin>>target;
    sort(a.begin(),a.end());
    int l=0;
    int r=a.size()-1;
    while(l<r)
    {
        if(a.at(l)+a.at(r)==target)
        {
            ans.push_back(l);
            ans.push_back(r);
            break;
        }
        else if(a.at(l)+a.at(r)<target)
        {
            l++;
        }
        else
        {
            r--;
        }
        
    }
}