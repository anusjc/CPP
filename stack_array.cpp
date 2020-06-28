#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    while(n)
    {
    int ch;
    cin>>ch;
    switch(ch)
    {
    case 1: int ip;
        cin>>ip;
        a.push_back(ip);
        break;
    case 2: a.pop_back();
            break;  
    case 3:  cout<<*max_element(a.begin(), a.end());       
                break;
    default: exit(0);            
   
    return 0;
    }}
}